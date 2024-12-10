#include "TMS.h"
#include "Task.h"
#include "PriorityTask.h"

int main() {
    TMS taskManager;

    Task* task1 = new Task("Finish Assignment", "Complete the math assignment", "2024-08-20");
    taskManager.addTask(task1);

    PriorityTask* task2 = new PriorityTask("Buy Groceries", "Buy vegetables and fruits", "2024-08-17", 1);
    taskManager.addTask(task2);

    taskManager.viewTasks();
   
    taskManager.completeTaskByTitle("Finish Assignment");
   
    taskManager.viewTasks();

    return 0;
}
