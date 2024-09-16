#include "TMS.h"
#include <algorithm>
#include <iostream>

using namespace std;

void TMS::addTask(const Task& task) {
    tasks.push_back(task);   
}

void TMS::viewTasks() const {
    for (const auto& task : tasks) {  
        task.displayTask();
        cout << "----------------------" << endl;
    }
}


void TMS::sortTasksByDeadline() {
    sort(tasks.begin(), tasks.end(), [](const Task& a, const Task& b) {  
        return a.getDeadline() < b.getDeadline();
    });
}

void TMS::completeTaskByTitle(const string& title) {
    for (auto& task : tasks) {    
        if (task.getTitle() == title) {
            task.completeTask();
            cout << "Task \"" << title << "\" marked as completed." << endl;
            return;
        }
    }
    cout << "Task \"" << title << "\" not found." << endl;
}
