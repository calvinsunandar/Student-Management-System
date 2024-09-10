#include "person.h"

using namespace std;

// Constructor for the Person class
Person::Person(const string& name, const string& email)
    : name(name), email(email)
{
}

// Getter function for the name of the person
string Person::getName() const {
    return name;
}

// Getter function for the email of the person
string Person::getEmail() const {
    return email;
}

// Setter function to change the email of the person
void Person::setEmail(const string& email) {
    this->email = email;
}

// Setter function to change the name of the person
void Person::setName(const string& name) {
    this->name = name;
}