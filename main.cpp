#include "TMS.h"
#include "PriorityTask.h"

int main() {
    TMS taskManager;

    // Add Default Task
    Task* task1 = new Task("Finish Assignment", "Complete the math assignment", "2024-08-20");
    taskManager.addTask(task1);

    // Add Priority Task
    PriorityTask* task2 = new PriorityTask("Buy Groceries", "Buy vegetables and fruits", "2024-08-17", 1);
    taskManager.addTask(task2);

    // View All Tasks
    taskManager.viewTasks();

    return 0;
}
