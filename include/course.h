#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course
{
private:
    std::string courseName;
    int courseId;
    std::string faculty;
    std::string enrolledStudents[30]; // Array for storing up to 30 students
    int studentCount;

public:
    Course(const std::string &name, int id, const std::string &faculty);
    void enrollStudent(const std::string &studentName);
    void viewEnrolledStudents() const;
    std::string getCourseName() const;
    int getCourseId() const;
};

#endif
