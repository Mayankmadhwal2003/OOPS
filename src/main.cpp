#include "student.h"
#include "faculty.h"
#include "administrator.h"
#include "course.h"
#include "transaction.h"
#include "universitysystem.h"
#include <iostream>

int main()
{
    UniversitySystem system;

    // Create courses
    Course *math = new Course("Math101", 101, "Dr. Smith");
    Course *physics = new Course("Physics101", 102, "Dr. Johnson");
    system.addCourse(math);
    system.addCourse(physics);

    // Enroll students in courses
    system.enrollStudentInCourse("Alice", 101);
    system.enrollStudentInCourse("Bob", 102);

    // Process transactions
    Transaction *payment1 = new Transaction("Alice", 500.0, "Tuition Fee");
    Transaction *payment2 = new Transaction("Bob", 300.0, "Tuition Fee");
    system.processTransaction(payment1);
    system.processTransaction(payment2);

    // View all courses and transactions
    system.viewAllCourses();
    system.viewAllTransactions();

    // Clean up
    delete math;
    delete physics;
    delete payment1;
    delete payment2;

    return 0;
}
