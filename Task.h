#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>
using namespace std;

class Task {
protected:
    string title;
    string description;
    string deadline;
    bool isCompleted;

public:
    // Default Constructor
    Task() : title(""), description(""), deadline(""), isCompleted(false) {}

    // Parameterized Constructor
    Task(const string& t, const string& d, const string& dl)
        : title(t), description(d), deadline(dl), isCompleted(false) {}

    // Virtual Destructor
    virtual ~Task() {}

    // Getters
    string getTitle() const { return title; }
    string getDescription() const { return description; }
    string getDeadline() const { return deadline; }
    bool getCompletionStatus() const { return isCompleted; }

    // Setters
    virtual void setTitle(const string& t) { title = t; }
    virtual void setDescription(const string& d) { description = d; }
    virtual void setDeadline(const string& dl) { deadline = dl; }
    virtual void completeTask() { isCompleted = true; }

    // Display Task Details
    virtual void displayTaskDetails() const {
        cout << "Title: " << title << endl;
        cout << "Description: " << description << endl;
        cout << "Deadline: " << deadline << endl;
        cout << "Status: " << (isCompleted ? "Completed" : "Incomplete") << endl;
    }
};

#endif
