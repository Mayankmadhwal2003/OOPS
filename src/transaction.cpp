#include "transaction.h"
#include <iostream>

Transaction::Transaction(const std::string &studentName, double amount, const std::string &type)
    : studentName(studentName), amount(amount), transactionType(type) {}

void Transaction::processTransaction() const
{
    std::cout << "Processing " << transactionType << " transaction for " << studentName
              << " of amount $" << amount << std::endl;
}

std::string Transaction::getStudentName() const
{
    return studentName;
}
