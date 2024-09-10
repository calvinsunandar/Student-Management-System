#include "student.h"

using namespace std;

// Initialize the static variable nextStudentID
int Student::nextStudentID = 0;
// Constructor for the Student class
Student::Student(const string& name, const string& email, const string& schedule)
    : Person(name, email), classSchedule({ schedule })
{
    studentID = ++nextStudentID;
}
// Getter function for the class schedule of the student
string Student::getSchedule() const {
    string scheduleString;
    for (const auto& course : classSchedule) {
        scheduleString += course + " ";
    }
    return scheduleString;
}
// Function to update the class schedule of the student
void Student::updateSchedule(const string& schedule) {
    classSchedule.push_back(schedule);
}
// Getter function for the ID of the student
int Student::getStudentID() const {
    return studentID;
}
// Function to mark attendance for the student on a given date
void Student::markAttendance(const string& date, const string& status) {
    attendanceRecord[date] = status;
}
// Getter function to get the attendance record for the student
map<string, string> Student::getAttendanceRecord() const {
    return attendanceRecord;
}

