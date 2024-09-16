#include "TMS.h"
#include <algorithm>
#include <iostream>

using namespace std;

void TMS::addTask(const Task& task) {
    this->tasks.push_back(task);   
}

void TMS::viewTasks() const {
    for (const auto& task : this->tasks) {  
        task.displayTask();
        cout << "----------------------" << endl;
    }
}

void TMS::sortTasksByDeadline() {
    sort(this->tasks.begin(), this->tasks.end(), [](const Task& a, const Task& b) {  
        return a.getDeadline() < b.getDeadline();
    });
}

void TMS::completeTaskByTitle(const string& title) {
    for (auto& task : this->tasks) {    
        if (task.getTitle() == title) {
            task.completeTask();
            cout << "Task \"" << title << "\" marked as completed." << endl;
            return;
        }
    }
    cout << "Task \"" << title << "\" not found." << endl;
}
