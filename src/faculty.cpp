#include "faculty.h"
#include <iostream>

FacultyMember::FacultyMember(const std::string &name, int id, const std::string &contactInfo)
    : User(name, id, contactInfo), numAssignedCourses(0) {}

void FacultyMember::addCourse(const std::string &course)
{
    if (numAssignedCourses < 10)
    {
        assignedCourses[numAssignedCourses++] = course;
        std::cout << name << " assigned to course: " << course << std::endl;
    }
    else
    {
        std::cout << "Cannot assign more courses. Maximum limit reached." << std::endl;
    }
}

void FacultyMember::removeCourse(const std::string &course)
{
    bool found = false;
    for (int i = 0; i < numAssignedCourses; ++i)
    {
        if (assignedCourses[i] == course)
        {
            // Shift remaining courses
            for (int j = i; j < numAssignedCourses - 1; ++j)
            {
                assignedCourses[j] = assignedCourses[j + 1];
            }
            --numAssignedCourses;
            std::cout << name << " removed from course: " << course << std::endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        std::cout << "Course not found in the list: " << course << std::endl;
    }
}

void FacultyMember::viewDetails() const
{
    std::cout << "Assigned Courses: ";
    for (int i = 0; i < numAssignedCourses; ++i)
    {
        std::cout << assignedCourses[i] << " ";
    }
    std::cout << std::endl;
}
