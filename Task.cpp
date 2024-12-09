#include "Task.h"

int Task::totalTasks = 0;
int Task::completedTasks = 0;

// Default Constructor
Task::Task() : title(""), description(""), deadline(""), isCompleted(false) {
    totalTasks++;
}

// Parameterized Constructor
Task::Task(string t, string d, string dl)
    : title(t), description(d), deadline(dl), isCompleted(false) {
    totalTasks++;
}

// Destructor
Task::~Task() {
    cout << "Destructor called for task: " << title << endl;
}

void Task::completeTask() {
    if (!isCompleted) {
        isCompleted = true; 
        completedTasks++;
    }
}

void Task::displayTaskDetails() const {
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
