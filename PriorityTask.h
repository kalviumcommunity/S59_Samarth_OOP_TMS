#ifndef PRIORITYTASK_H
#define PRIORITYTASK_H

#include "Task.h"

class PriorityTask : public Task {
private:
    int priorityLevel; // 1 = High, 2 = Medium, 3 = Low

public:
    // Default Constructor
    PriorityTask() : Task(), priorityLevel(3) {}

    // Parameterized Constructor
    PriorityTask(const string& t, const string& d, const string& dl, int p)
        : Task(t, d, dl), priorityLevel(p) {
        if (priorityLevel < 1 || priorityLevel > 3) {
            cout << "Invalid priority level. Setting to Low (3)." << endl;
            priorityLevel = 3;
        }
    }

    // Setter for Priority Level
    void setPriorityLevel(int level) {
        if (level >= 1 && level <= 3) {
            priorityLevel = level;
        } else {
            cout << "Invalid priority level. Please enter 1 (High), 2 (Medium), or 3 (Low)." << endl;
        }
    }

    // Getter for Priority Level
    int getPriorityLevel() const { return priorityLevel; }

    // Override displayTaskDetails() to include priority
    void displayTaskDetails() const override {
        Task::displayTaskDetails();
        cout << "Priority: "
             << (priorityLevel == 1 ? "High"
                                     : priorityLevel == 2 ? "Medium"
                                                          : "Low")
             << endl;
    }
};

#endif
