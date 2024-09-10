#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

// class definition for Person
class Person {
public:
    Person(const string& name, const string& email);  // Constructor for the Person class
    string getName() const;  // Getter function for the name of the person
    string getEmail() const;  // Getter function for the email of the person
    void setEmail(const string& email);  // Setter function to change the email of the person
    void setName(const string& name);  // Setter function to change the name of the person

private:
    string name;  // Name of the person
    string email;  // Email of the person
};

#endif /* PERSON_H */