#include <iostream>
#include <vector>
#include "class.h"
#include "person.h"
#include "teacher.h"
#include "student.h"

using namespace std;

int main() {
    // Create some teachers
    Teacher t1("John Smith", "jsmith@example.com", { "Math", "Science" });
    Teacher t2("Sue Johnson", "sjohnson@example.com", { "History", "English" });
    Teacher t3("Bob Martinez", "bmartinez@example.com", { "Art" });
    // Create some students
    Student s1("Alice Johnson", "ajohnson@example.com", "Math");
    Student s2("Bob Davis", "bdavis@example.com", "Science");
    Student s3("Charlie Smith", "csmith@example.com", "History");
    Student s4("David Lee", "dlee@example.com", "English");
    Student s5("Evelyn Martinez", "emartinez@example.com", "Art");
    // Create some classes
    Class c1("Math 101", t1);
    Class c2("Science 101", t1);
    Class c3("History 101", t2);
    Class c4("English 101", t2);
    Class c5("Art 101", t3);
    
    // Add subjects to teachers
    t1.updateSubjects("Computer Science");
    
    // Add students to classes
    c1.addStudent(s1);
    c1.addStudent(s2);
    c2.addStudent(s2);
    c3.addStudent(s3);
    c4.addStudent(s4);
    c5.addStudent(s5);
    
    // Remove a student from a class
    c1.removeStudent(s1);
    
    // Print teacher info
    cout << t1.getName() << " teaches: " << endl;
    for (const auto& subject : t1.getSubjects()) {
        cout << "- " << subject << endl;
    }
    
    // Print student info
    cout << s2.getName() << "'s schedule: " << s2.getSchedule() << endl;
    
    // Print class info
    cout << c1.getName() << " taught by " << c1.getTeacher().getName() << " has the following students:" << endl;
    for (const auto& student : c1.getStudentList()) {
        cout << "- " << student.getName() << endl;
    }
    
    return 0;
}
