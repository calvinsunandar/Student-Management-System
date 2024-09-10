#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include <vector>
#include "person.h"

using namespace std; 

class Teacher : public Person {
public:
    Teacher(const string& name, const string& email, const vector<string>& subjects); // Constructor for the Teacher class
    vector<string> getSubjects() const; // Getter function for the subjects taught by the teacher
    void updateSubjects(const string& subject); // Function to add a subject to the subjects taught by the teacher
    int getTeacherID() const; // Getter function for the ID of the teacher
private:
    static int nextTeacherID; // Static variable to keep track of the next teacher ID to be assigned
    int teacherID; // ID assigned to this teacher
    vector<string> subjectsTaught; // Subjects taught by this teacher
};
#endif /* TEACHER_H */
