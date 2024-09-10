#ifndef EXAM_H
#define EXAM_H

#include <string>
#include <vector>

using namespace std;

class Exam {
public:
    Exam(const string& title, double maxScore);  // Constructor for the Exam class
    string getTitle() const;  // Getter function for the title of the exam
    double getMaxScore() const;  // Getter function for the maximum score of the exam
private:
    string title;  // Title of the exam
    double maxScore;  // Maximum possible score on the exam
};
#endif /* EXAM_H */