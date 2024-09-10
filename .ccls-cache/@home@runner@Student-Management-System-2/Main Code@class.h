#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <vector>
#include <map>
#include "student.h"
#include "teacher.h"

using namespace std;

class Class {
public:
    Class(const string& name, const Teacher& teacher);
    string getName() const;
    Teacher getTeacher() const;
    vector<Student> getStudentList() const;
    void addStudent(const Student& student);
    void removeStudent(const Student& student);
    int getClassID() const;
    map<string, map<string, string>> generateAttendanceReport(const string& startDate, const string& endDate);
private:
    static int nextClassID;
    int classID;
    string name;
    Teacher teacher;
    vector<Student> studentList;
};

#endif /* CLASS_H */
