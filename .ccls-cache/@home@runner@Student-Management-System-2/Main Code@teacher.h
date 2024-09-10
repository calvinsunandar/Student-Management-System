#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>
#include "person.h"

using namespace std; 

class Teacher : public Person {
public:
    Teacher(const string& name, const string& email, const vector<string>& subjects);
    vector<string> getSubjects() const;
    void updateSubjects(const string& subject);
    int getTeacherID() const;
private:
    static int nextTeacherID;
    int teacherID;
    vector<string> subjectsTaught;
};
#endif /* TEACHER_H */
