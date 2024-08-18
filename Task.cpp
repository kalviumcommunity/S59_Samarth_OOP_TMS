#include "Task.h"
#include <iostream>

using namespace std;

Task::Task(string t, string d, string dl)
    : title(t), description(d), deadline(dl), isCompleted(false) {}

void Task::completeTask() {
    isCompleted = true;
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
