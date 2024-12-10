#include "Task.h"

// Default Constructor
Task::Task() : title(""), description(""), deadline(""), isCompleted(false) {}

// Parameterized Constructor
Task::Task(string t, string d, string dl)
    : title(t), description(d), deadline(dl), isCompleted(false) {}

// destructor 1
Task::~Task() {
    cout << "Task deleted: " << title << endl;
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

bool Task::isTaskCompleted() const {
    return isCompleted;
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
