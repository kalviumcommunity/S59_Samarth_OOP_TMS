#ifndef TMS_H
#define TMS_H

#include "Task.h"
#include <vector>
using namespace std;

class TMS {
private:
    vector<Task> tasks;

public:
    void addTask(const Task& task);
    void viewTasks() const;
    void sortTasksByDeadline();
    void completeTaskByTitle(const string& title);
};

#endif
