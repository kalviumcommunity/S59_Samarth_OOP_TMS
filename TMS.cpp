#include "TMS.h"
#include "TaskStats.h"
#include <algorithm>
#include <iostream>

using namespace std;

void TMS::addTask(BaseTask* task) {
    if (task != nullptr) {  
        tasks.push_back(task);
        TaskStats::incrementTotalTasks();  
    } else {
        cout << "Error: Attempted to add a null task." << endl;
    }
}

void TMS::viewTasks() const {
    if (tasks.empty()) {
        cout << "No tasks to display." << endl;
        return;
    }

    for (const auto& task : tasks) {
        if (task != nullptr) {
            task->displayTaskDetails();  
            cout << "----------------------" << endl;
        } else {
            cout << "Error: Null task encountered." << endl;
        }
    }
}


void TMS::completeTaskByTitle(const string& title) {
    bool taskFound = false;
    for (auto& task : tasks) {
        if (task == nullptr) {
            continue;  
        }
        if (task->getTitle() == title) {
            if (!task->isCompleted()) {
                task->completeTask();
                TaskStats::incrementCompletedTasks();  // Update stats
                cout << "Task \"" << title << "\" marked as completed." << endl;
            } else {
                cout << "Task \"" << title << "\" is already completed." << endl;
            }
            taskFound = true;
            break;
        }
    }

    if (!taskFound) {
        cout << "Task \"" << title << "\" not found." << endl;
    }
}

TMS::~TMS() {
    
    for (auto task : tasks) {
        delete task; 
    }
    tasks.clear();  
    cout << "All tasks have been deleted, and memory is cleaned up." << endl;
}
