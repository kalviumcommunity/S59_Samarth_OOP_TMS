#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostream>
using namespace std;

class Task {
private:
    string title;
    string description;
    string deadline;
    bool isCompleted;

public:
    // Default Constructor
    Task();

    // Parameterized Constructor
    Task(string t, string d, string dl);

    // Destructor
    ~Task();

    // Member Functions
    void completeTask();
    void displayTaskDetails() const;
    string getTitle() const;
    string getDeadline() const;
    bool isTaskCompleted() const;

    // Setters
    void setTitle(const string& newTitle);
    void setDescription(const string& newDescription);
    void setDeadline(const string& newDeadline);
};

#endif
