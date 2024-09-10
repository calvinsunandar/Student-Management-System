#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
public:
    Person(const string& name, const string& email);
    string getName() const;
    string getEmail() const;
    void setEmail(const string& email);
private:
    string name;
    string email;
};
#endif /* PERSON_H */