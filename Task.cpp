#include "Task.h"
#include <iostream>
using namespace std;

// Default Constructor
Task::Task() : title(""), description(""), deadline(""), completed(false) {}

// Parameterized Constructor
Task::Task(string t, string d, string dl) : title(t), description(d), deadline(dl), completed(false) {}

// Destructor
Task::~Task() {
    cout << "Task deleted: " << title << endl;
}

void Task::displayTaskDetails() const {
    cout << "Title: " << title << "\nDescription: " << description
         << "\nDeadline: " << deadline << "\nStatus: "
         << (completed ? "Completed" : "Incomplete") << endl;
}

string Task::getTitle() const {
    return title;
}

void Task::setTitle(const string& newTitle) {
    title = newTitle;
}

string Task::getDeadline() const {
    return deadline;
}

void Task::setDeadline(const string& newDeadline) {
    deadline = newDeadline;
}

bool Task::isCompleted() const {
    return completed;
}



void Task::completeTask() {
    completed = true;
}
