#ifndef UNIVERSITYSYSTEM_H
#define UNIVERSITYSYSTEM_H

#include "course.h"
#include "transaction.h"
#include "user.h"

class UniversitySystem
{
private:
    Course *courses[20];           // Array for storing up to 20 courses
    Transaction *transactions[50]; // Array for storing up to 50 transactions
    int courseCount;
    int transactionCount;

public:
    UniversitySystem();
    void addCourse(Course *course);
    void enrollStudentInCourse(const std::string &studentName, int courseId);
    void processTransaction(Transaction *transaction);
    void viewAllCourses() const;
    void viewAllTransactions() const;
};

#endif
