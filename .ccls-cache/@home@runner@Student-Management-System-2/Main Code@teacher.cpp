#include "teacher.h"

using namespace std;

int Teacher::nextTeacherID = 0;

Teacher::Teacher(const string& name, const string& email, const vector<string>& subjects)
    : Person(name, email), subjectsTaught(subjects)
{
    teacherID = ++nextTeacherID;
}

vector<string> Teacher::getSubjects() const {
    return subjectsTaught;
}

void Teacher::updateSubjects(const string& subject) {
    subjectsTaught.push_back(subject);
}

int Teacher::getTeacherID() const {
    return teacherID;
}
