#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction
{
private:
    std::string studentName;
    double amount;
    std::string transactionType; // e.g., "Tuition Fee", "Library Fine", etc.

public:
    Transaction(const std::string &studentName, double amount, const std::string &type);
    void processTransaction() const;
    std::string getStudentName() const;
};

#endif
