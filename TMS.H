#ifndef TMS_H
#define TMS_H

#include "Task.h"
#include <vector>
using namespace std;

class TMS {
private:
    vector<Task*> tasks;

public:
    void addTask(Task* task);                     // Single task
    void addTask(vector<Task*> taskList);         // Multiple tasks (Overloaded)
    void viewTasks() const;
    void sortTasksByDeadline();
    void completeTaskByTitle(const string& title);
    ~TMS();
};

#endif
