#ifndef TASK_H
#define TASK_H

#include "BaseTask.h"
#include <string>
using namespace std;

class Task : public BaseTask {
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

    // Override pure virtual function from BaseTask
    void displayTaskDetails() const override;
    void completeTask() override;
    string getTitle() const override;
    string getDeadline() const override;

    static int getTotalTasks();
    static int getCompletedTasks();
    static void getTaskStats();
};

#endif
