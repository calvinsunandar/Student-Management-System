#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <vector>
#include <map>
#include "student.h"
#include "teacher.h"
#include "exam.h"

using namespace std;

class Class {
public:
    // Constructor for the Class class
    Class(const string& name, const Teacher& teacher);

    // Getter function for the name of the class
    string getName() const;

    // Getter function for the teacher of the class
    Teacher getTeacher() const;

    // Getter function for the list of students in the class
    vector<Student> getStudentList() const;

    // Function to add a student to the class
    void addStudent(const Student& student);

    // Function to remove a student from the class
    void removeStudent(const Student& student);

    // Getter function for the ID of the class
    int getClassID() const;

    // Function to generate an attendance report for the class within a given date range
    map<string, map<string, string>> generateAttendanceReport(const string& startDate, const string& endDate);

    // Function to enter exam grades for the class
    void enterExamGrades(const Exam& exam, const vector<double>& grades);

private:
    // Static variable to keep track of the next class ID to be assigned
    static int nextClassID;

    int classID; // ID assigned to this class
    string name; // Name of this class
    Teacher teacher; // Teacher for this class
    vector<Student> studentList; // List of students in this class
};

#endif /* CLASS_H */
