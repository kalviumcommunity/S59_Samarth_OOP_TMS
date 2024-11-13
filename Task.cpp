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
    cout << "Title: " << title << "Description: " << description
         << "Deadline: " << deadline << "Status: " 
         << (isCompleted ? "Completed" : "Incomplete") << endl;
}

string Task::getTitle() const {
    return title;
}

string Task::getDeadline() const {
    return deadline;
}

void Task::setTitle(const string& newTitle) {
    title = newTitle;
}

void Task::setDescription(const string& newDescription) {
    description = newDescription;
}

void Task::setDeadline(const string& newDeadline) {
    deadline = newDeadline;
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
