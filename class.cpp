#include "class.h"

using namespace std;

// Initialize the static variable nextClassID
int Class::nextClassID = 0;
// Constructor for the Class class
Class::Class(const string& name, const Teacher& teacher)
    : name(name), teacher(teacher)
{
    classID = ++nextClassID;
}
// Getter function for the name of the class
string Class::getName() const {
    return name;
}
// Getter function for the teacher of the class
Teacher Class::getTeacher() const {
    return teacher;
}
// Getter function for the list of students in the class
vector<Student> Class::getStudentList() const {
    return studentList;
}
// Function to add a student to the class
void Class::addStudent(const Student& student) {
    studentList.push_back(student);
}
// Function to remove a student from the class
void Class::removeStudent(const Student& student) {
    for (auto it = studentList.begin(); it != studentList.end(); ++it) {
        if (it->getStudentID() == student.getStudentID()) {
            studentList.erase(it);
            break;
        }
    }
}
// Getter function for the ID of the class
int Class::getClassID() const {
    return classID;
}
// Function to generate an attendance report for the class within a given date range
map<string, map<string, string>> Class::generateAttendanceReport(const string& startDate, const string& endDate) {
    map<string, map<string, string>> attendanceReport;
    for (auto& student : studentList) {
        map<string, string> studentAttendanceRecord;
        for (auto& attendance : student.getAttendanceRecord()) {
            if (attendance.first >= startDate && attendance.first <= endDate) {
                studentAttendanceRecord[attendance.first] = attendance.second;
            }
        }
        attendanceReport[student.getName()] = studentAttendanceRecord;
    }
    return attendanceReport;
}
