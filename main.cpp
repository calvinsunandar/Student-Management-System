#include <iostream>
#include <fstream>
#include <string>

#include "student.h"

using namespace std;

int main() {
    Student s("Student Name", "student@example.com", ""); // create an empty student object

    // read data from file
    ifstream inFile("student.txt");
    string name, email, schedule;

    if (inFile.is_open()) {
        getline(inFile, name);
        getline(inFile, email);
        getline(inFile, schedule);

        s.setName(name); // set the name of the student object to the name read from the file
        s.setEmail(email); // set the email of the student object to the email read from the file
        s.updateSchedule(schedule); // add the schedule read from the file to the student object

        inFile.close();
    } else {
        cout << "Unable to open file" << endl;
        return 1;
    }

    // print student object's data to console
    cout << "Name: " << s.getName() << endl;
    cout << "Email: " << s.getEmail() << endl;
    cout << "Schedule: " << s.getSchedule() << endl;

    return 0;
}