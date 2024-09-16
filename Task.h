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

    static int totalTasks;
    static int completedTasks;

public:
    Task(string t, string d, string dl);

    void completeTask();
    void displayTask() const;

    static int getTotalTasks();
    static int getCompletedTasks();
    static void getTaskStats();

    string getTitle() const;
    string getDeadline() const;
};

#endif
