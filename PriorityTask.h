#ifndef PRIORITYTASK_H
#define PRIORITYTASK_H

#include "Task.h"

class PriorityTask : public Task {
private:
    int priorityLevel; // 1 = High, 2 = Medium, 3 = Low

public:
    PriorityTask() : Task(), priorityLevel(3) {}
    PriorityTask(const string& t, const string& d, const string& dl, int p)
        : Task(t, d, dl), priorityLevel(p) {}

    void setPriorityLevel(int level) {
        if (level >= 1 && level <= 3) {
            priorityLevel = level;
        } else {
            cout << "Invalid priority level. Setting to Low." << endl;
            priorityLevel = 3;
        }
    }

    int getPriorityLevel() const { return priorityLevel; }

    void displayTaskDetails() const override {
        Task::displayTaskDetails();
        cout << "Priority: "
             << (priorityLevel == 1 ? "High" : priorityLevel == 2 ? "Medium" : "Low") << endl;
    }
};

#endif
