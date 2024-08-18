#include "Task.h"
#include <iostream>

using namespace std;

Task::Task(string t, string d, string dl)
    : title(t), description(d), deadline(dl), isCompleted(false) {
   
    this->title = t;
    this->description = d;
    this->deadline = dl;
    this->isCompleted = false;
}

void Task::completeTask() {
    this->isCompleted = true;  
}

void Task::displayTask() const {
    cout << "Title: " << this->title << "\nDescription: " << this->description
         << "\nDeadline: " << this->deadline << "\nStatus: " 
         << (this->isCompleted ? "Completed" : "Incomplete") << endl;
}

string Task::getTitle() const {
    return this->title;  
}

string Task::getDeadline() const {
    return this->deadline;  
}
