#include "TMS.h"
#include <algorithm>
#include <iostream>

using namespace std;

void TMS::addTask(const Task& task) {
    this->tasks.push_back(task);  // Using `this` pointer to modify the current object's member
}

void TMS::viewTasks() const {
    for (const auto& task : this->tasks) {  // Using `this` pointer to access the current object's member
        task.displayTask();
        cout << "----------------------" << endl;
    }
}

void TMS::sortTasksByDeadline() {
    sort(this->tasks.begin(), this->tasks.end(), [](const Task& a, const Task& b) {  // Using `this` pointer to access the current object's member
        return a.getDeadline() < b.getDeadline();
    });
}

void TMS::completeTaskByTitle(const string& title) {
    for (auto& task : this->tasks) {  // Using `this` pointer to access the current object's member
        if (task.getTitle() == title) {
            task.completeTask();
            cout << "Task \"" << title << "\" marked as completed." << endl;
            return;
        }
    }
    cout << "Task \"" << title << "\" not found." << endl;
}
