#include "student.h"
#include <iostream>

Student::Student(const std::string &name, int id, const std::string &contactInfo)
    : User(name, id, contactInfo), grade(0.0), feeStatus(0.0), numCourses(0) {}

void Student::registerCourse(const std::string &course)
{
    if (numCourses < 10)
    {
        courses[numCourses++] = course;
        std::cout << name << " registered for course: " << course << std::endl;
    }
    else
    {
        std::cout << "Cannot register more courses. Maximum limit reached." << std::endl;
    }
}

void Student::makePayment(double amount)
{
    if (amount > feeStatus)
    {
        std::cout << "Payment exceeds outstanding fee amount!" << std::endl;
    }
    else
    {
        feeStatus -= amount;
        std::cout << name << " made a payment of " << amount << ". Remaining fee: " << feeStatus << std::endl;
    }
}

void Student::viewGrades() const
{
    std::cout << "Grade: " << grade << std::endl;
}

void Student::viewDetails() const
{
    std::cout << "Registered Courses: ";
    for (int i = 0; i < numCourses; ++i)
    {
        std::cout << courses[i] << " ";
    }
    std::cout << "\nGrade: " << grade << "\nFee Status: " << feeStatus << std::endl;
}
