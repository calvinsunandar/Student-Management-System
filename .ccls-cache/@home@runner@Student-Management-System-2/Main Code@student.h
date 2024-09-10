#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include <map>
#include "person.h"

using namespace std;

class Student : public Person {
public:
    Student(const string& name, const string& email, const string& schedule);
    string getSchedule() const;
    void updateSchedule(const string& schedule);
    int getStudentID() const;
    void markAttendance(const string& date, const string& status);
    map<string, string> getAttendanceRecord() const;

private:
    static int nextStudentID;
    int studentID;
    vector<string> classSchedule;
    map<string, string> attendanceRecord;
};


#endif /* STUDENT_H */