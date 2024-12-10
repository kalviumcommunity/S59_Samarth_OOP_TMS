#ifndef TMS_H
#define TMS_H

#include <vector>
#include "BaseTask.h"

class TMS {
private:
    vector<BaseTask*> tasks;

public:
    ~TMS() {
        for (auto task : tasks) {
            delete task;
        }
    }

    void addTask(BaseTask* task) {
        tasks.push_back(task);
    }

    void viewTasks() const {
        for (const auto& task : tasks) {
            task->displayTaskDetails();
            cout << "----------------------" << endl;
        }
    }
};

#endif
