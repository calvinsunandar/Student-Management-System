#include "class.h"

using namespace std;

int Class::nextClassID = 0;

Class::Class(const string& name, const Teacher& teacher)
    : name(name), teacher(teacher)
{
    classID = ++nextClassID;
}

string Class::getName() const {
    return name;
}

Teacher Class::getTeacher() const {
    return teacher;
}

vector<Student> Class::getStudentList() const {
    return studentList;
}

void Class::addStudent(const Student& student) {
    studentList.push_back(student);
}

void Class::removeStudent(const Student& student) {
    for (auto it = studentList.begin(); it != studentList.end(); ++it) {
        if (it->getStudentID() == student.getStudentID()) {
            studentList.erase(it);
            break;
        }
    }
}

int Class::getClassID() const {
    return classID;
}

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
