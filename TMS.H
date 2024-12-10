#ifndef TMS_H
#define TMS_H

#include "BaseTask.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class TMS {
private:
    vector<BaseTask*> tasks;

public:
    void addTask(BaseTask* task) { tasks.push_back(task); }

    void viewTasks() const {
        for (const auto& task : tasks) {
            task->displayTaskDetails();
            cout << "----------------------" << endl;
        }
    }

    void completeTaskByTitle(const string& title) {
        for (auto& task : tasks) {
            if (task->getTitle() == title) {
                task->completeTask();
                cout << "Task \"" << title << "\" marked as completed." << endl;
                return;
            }
        }
        cout << "Task \"" << title << "\" not found." << endl;
    }

    ~TMS() {
        for (auto task : tasks) {
            delete task;
        }
    }
};

#endif
