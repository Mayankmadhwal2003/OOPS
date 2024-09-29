#include "universitysystem.h"
#include <iostream>

UniversitySystem::UniversitySystem() : courseCount(0), transactionCount(0) {}

void UniversitySystem::addCourse(Course *course)
{
    if (courseCount < 20)
    {
        courses[courseCount++] = course;
        std::cout << "Course " << course->getCourseName() << " added to the system." << std::endl;
    }
    else
    {
        std::cout << "Maximum number of courses reached." << std::endl;
    }
}

void UniversitySystem::enrollStudentInCourse(const std::string &studentName, int courseId)
{
    bool courseFound = false;
    for (int i = 0; i < courseCount; ++i)
    {
        if (courses[i]->getCourseId() == courseId)
        {
            courses[i]->enrollStudent(studentName);
            courseFound = true;
            break;
        }
    }
    if (!courseFound)
    {
        std::cout << "Course with ID " << courseId << " not found." << std::endl;
    }
}

void UniversitySystem::processTransaction(Transaction *transaction)
{
    if (transactionCount < 50)
    {
        transactions[transactionCount++] = transaction;
        transaction->processTransaction();
    }
    else
    {
        std::cout << "Transaction limit reached." << std::endl;
    }
}

void UniversitySystem::viewAllCourses() const
{
    std::cout << "Courses in the system:" << std::endl;
    for (int i = 0; i < courseCount; ++i)
    {
        std::cout << courses[i]->getCourseName() << std::endl;
    }
}

void UniversitySystem::viewAllTransactions() const
{
    std::cout << "All transactions processed:" << std::endl;
    for (int i = 0; i < transactionCount; ++i)
    {
        std::cout << "Transaction for student " << transactions[i]->getStudentName() << std::endl;
    }
}
