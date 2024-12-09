#ifndef TMS_H
#define TMS_H

#include "Task.h"
#include <vector>
using namespace std;

class TMS {
private:
    vector<BaseTask*> tasks;

public:
    void addTask(BaseTask* task);                // Accepts BaseTask pointer
    void viewTasks() const;
    void sortTasksByDeadline();
    void completeTaskByTitle(const string& title);
    ~TMS();
};

#endif
