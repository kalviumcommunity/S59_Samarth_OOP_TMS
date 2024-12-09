#ifndef CATEGORIZEDTASK_H
#define CATEGORIZEDTASK_H

#include "Task.h"
#include "Category.h"

class CategorizedTask : public Task, public Category {
public:
    CategorizedTask(string t, string d, string dl, string cat)
        : Task(t, d, dl), Category(cat) {}

    // Override displayTaskDetails() to show category
    void displayTaskDetails() const override {
        Task::displayTaskDetails();
        cout << "Category: " << categoryName << endl;
    }
};

#endif
