#ifndef FACULTY_H
#define FACULTY_H

#include "user.h"

class FacultyMember : public User
{
private:
    std::string assignedCourses[10]; // Fixed-size array for up to 10 courses
    int numAssignedCourses;

public:
    FacultyMember(const std::string &name, int id, const std::string &contactInfo);
    void addCourse(const std::string &course);
    void removeCourse(const std::string &course);
    virtual void viewDetails() const override;
};

#endif
