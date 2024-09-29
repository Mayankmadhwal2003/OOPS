#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"

class Student : public User
{
private:
    std::string courses[10]; // Fixed-size array for up to 10 courses
    int numCourses;
    double grade;
    double feeStatus;

public:
    Student(const std::string &name, int id, const std::string &contactInfo);
    void registerCourse(const std::string &course);
    void makePayment(double amount);
    void viewGrades() const;
    virtual void viewDetails() const override;
};

#endif
