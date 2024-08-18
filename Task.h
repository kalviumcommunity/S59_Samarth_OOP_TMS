#ifndef TASK_H
#define TASK_H

#include <string>
using namespace std;

class Task {
private:
    string title;
    string description;
    string deadline;
    bool isCompleted;

public:
    Task(string t, string d, string dl);

    void completeTask();
    void displayTask() const;

    string getTitle() const;
    string getDeadline() const;
};

#endif
