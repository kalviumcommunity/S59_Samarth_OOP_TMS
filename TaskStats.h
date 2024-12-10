#ifndef TASKSTATS_H
#define TASKSTATS_H

class TaskStats {
private:
    static int totalTasks;
    static int completedTasks;

public:
    static void incrementTotalTasks();
    static void incrementCompletedTasks();
    static void displayTaskStats();
};

#endif
