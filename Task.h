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

    static int totalTasks;
    static int completedTasks;

public:
    // Default Constructor
    Task();

    // Parameterized Constructor
    Task(string t, string d, string dl);

    // Destructor
    virtual ~Task();

    virtual void completeTask();
    virtual void displayTask() const;

    string getTitle() const;
    string getDeadline() const;

    void setTitle(const string& newTitle);
    void setDescription(const string& newDescription);
    void setDeadline(const string& newDeadline);

    static int getTotalTasks();
    static int getCompletedTasks();
    static void getTaskStats();
};

#endif
