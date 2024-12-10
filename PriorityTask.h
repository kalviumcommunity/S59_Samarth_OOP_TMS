#ifndef PRIORITYTASK_H
#define PRIORITYTASK_H

#include "Task.h"

class PriorityTask : public Task {
private:
    int priorityLevel; // 1 = High, 2 = Medium, 3 = Low

public:
    PriorityTask() : Task(), priorityLevel(3) {}
    PriorityTask(string t, string d, string dl, int p)
        : Task(t, d, dl), priorityLevel(p) {}

    void setPriorityLevel(int level) { priorityLevel = level; }
    int getPriorityLevel() const { return priorityLevel; }

    void displayTaskDetails() const override {
        Task::displayTaskDetails();
        cout << "Priority: " << (priorityLevel == 1 ? "High" : 
                                  priorityLevel == 2 ? "Medium" : "Low") << endl;
    }
};

#endif
