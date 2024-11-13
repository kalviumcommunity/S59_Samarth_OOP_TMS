#include "Task.h"
#include <iostream>

using namespace std;

int Task::totalTasks = 0;
int Task::completedTasks = 0;

Task::Task(string t, string d, string dl)
    : title(t), description(d), deadline(dl), isCompleted(false) {
    totalTasks++;
}

void Task::completeTask() {
    if (!isCompleted) {
        isCompleted = true; 
        completedTasks++;
    }
}

void Task::displayTask() const {
    cout << "Title: " << title << "\nDescription: " << description
         << "\nDeadline: " << deadline << "\nStatus: " 
         << (isCompleted ? "Completed" : "Incomplete") << endl;
}

string Task::getTitle() const {
    return title;
}

string Task::getDeadline() const {
    return deadline;
}

int Task::getTotalTasks() {
    return totalTasks;
}

int Task::getCompletedTasks() {
    return completedTasks;
}

void Task::getTaskStats() {
    cout << "Total tasks: " << totalTasks << endl;
    cout << "Completed tasks: " << completedTasks << endl;
}
