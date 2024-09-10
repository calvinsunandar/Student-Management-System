#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include <map>
#include "person.h"

using namespace std;

class Student : public Person {
public:
    // Constructor for the Student class
    Student(const string& name, const string& email, const string& schedule);

    // Getter function for the class schedule of the student
    string getSchedule() const;

    // Function to update the class schedule of the student
    void updateSchedule(const string& schedule);

    // Getter function for the ID of the student
    int getStudentID() const;

    // Function to mark attendance for the student on a given date
    void markAttendance(const string& date, const string& status);

    // Getter function to get the attendance record for the student
    map<string, string> getAttendanceRecord() const;

private:
    // Static variable to keep track of the next student ID to be assigned
    static int nextStudentID;
    
    int studentID; // ID assigned to this student
    vector<string> classSchedule; // Class schedule for the student
    map<string, string> attendanceRecord; // Attendance record for the student
};

#endif /* STUDENT_H */