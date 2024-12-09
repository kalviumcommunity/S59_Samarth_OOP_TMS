#include "TMS.h"
#include <algorithm>
#include <iostream>

using namespace std;

void TMS::addTask(BaseTask* task) {
    tasks.push_back(task);
}

void TMS::viewTasks() const {
    for (const auto& task : tasks) {
        task->displayTaskDetails(); // Calls the overridden method
        cout << "----------------------" << endl;
    }
}


void TMS::sortTasksByDeadline() {
    sort(tasks.begin(), tasks.end(), [](const BaseTask* a, const BaseTask* b) {
        return a->getDeadline() < b->getDeadline(); // Now using getDeadline() from derived class
    });
}

void TMS::completeTaskByTitle(const string& title) {
    for (auto& task : tasks) {
        if (task->getTitle() == title) {
            task->completeTask();  // Calls the overridden method
            cout << "Task \"" << title << "\" marked as completed." << endl;
            return;
        }
    }
    cout << "Task \"" << title << "\" not found." << endl;
}

TMS::~TMS() {
    for (auto task : tasks) {
        delete task;
    }
}
