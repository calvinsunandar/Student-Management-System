#include "teacher.h"

using namespace std;

// Initialize the static variable nextTeacherID
int Teacher::nextTeacherID = 0;

// Constructor for the Teacher class
Teacher::Teacher(const string& name, const string& email, const vector<string>& subjects)
    : Person(name, email), subjectsTaught(subjects)
{
    teacherID = ++nextTeacherID; // Assign a unique ID to this teacher
}
// Getter function for the subjects taught by the teacher

vector<string> Teacher::getSubjects() const {
    return subjectsTaught;
}
// Function to add a subject to the subjects taught by the teacher

void Teacher::updateSubjects(const string& subject) {
    subjectsTaught.push_back(subject);
}
// Getter function for the ID of the teacher
int Teacher::getTeacherID() const {
    return teacherID;
}
