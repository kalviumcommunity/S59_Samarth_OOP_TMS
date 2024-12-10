#ifndef TASK_H
#define TASK_H

#include "BaseTask.h"

class Task : public BaseTask {
protected:
    string title;
    string description;
    string deadline;

public:
    // Default Constructor
    Task() : title(""), description(""), deadline("") {}

    // Parameterized Constructor
    Task(const string& t, const string& d, const string& dl)
        : title(t), description(d), deadline(dl) {}

    // Getters and Setters
    string getTitle() const override { return title; }
    void setTitle(const string& t) override { title = t; }

    string getDescription() const { return description; }
    void setDescription(const string& d) { description = d; }

    string getDeadline() const { return deadline; }
    void setDeadline(const string& dl) { deadline = dl; }

    // Overridable Method
    void displayTaskDetails() const override {
        cout << "Title: " << title << endl;
        cout << "Description: " << description << endl;
        cout << "Deadline: " << deadline << endl;
    }
};

#endif
