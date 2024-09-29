#include "course.h"
#include <iostream>

Course::Course(const std::string &name, int id, const std::string &faculty)
    : courseName(name), courseId(id), faculty(faculty), studentCount(0) {}

void Course::enrollStudent(const std::string &studentName)
{
    if (studentCount < 30)
    {
        enrolledStudents[studentCount++] = studentName;
        std::cout << studentName << " enrolled in " << courseName << std::endl;
    }
    else
    {
        std::cout << "Course capacity reached." << std::endl;
    }
}

void Course::viewEnrolledStudents() const
{
    std::cout << "Students enrolled in " << courseName << ":" << std::endl;
    for (int i = 0; i < studentCount; ++i)
    {
        std::cout << enrolledStudents[i] << std::endl;
    }
}

std::string Course::getCourseName() const
{
    return courseName;
}

int ::Course ::getCourseId() const
{
    return this->courseId;
}