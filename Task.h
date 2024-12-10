#ifndef TASK_H
#define TASK_H

#include "BaseTask.h"
#include <iostream>

class Task : public BaseTask
{
private:
    string title;
    string description;
    string deadline;
    bool completed;

public:
    Task() : title(""), description(""), deadline(""), completed(false) {}

    Task(string t, string d, string dl) : title(t), description(d), deadline(dl), completed(false) {}

    void displayTaskDetails() const override
    {
        cout << "Title: " << title << "\nDescription: " << description
             << "\nDeadline: " << deadline << "\nStatus: "
             << (completed ? "Completed" : "Incomplete") << endl;
    }

    string getTitle() const override { return title; }

    void setTitle(const string &newTitle) override { this->title = newTitle; }

    bool isCompleted() const override { return completed; }

    void completeTask() override { completed = true; }

    string getDeadline() const { return deadline; }

    void setDeadline(const string &newDeadline) { deadline = newDeadline; }
};

#endif
