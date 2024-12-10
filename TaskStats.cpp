#include "TaskStats.h"
#include <iostream>
using namespace std;

int TaskStats::totalTasks = 0;
int TaskStats::completedTasks = 0;

void TaskStats::incrementTotalTasks() {
    totalTasks++;
}

void TaskStats::incrementCompletedTasks() {
    completedTasks++;
}

void TaskStats::displayTaskStats() {
    cout << "Total tasks: " << totalTasks << endl;
    cout << "Completed tasks: " << completedTasks << endl;
}
