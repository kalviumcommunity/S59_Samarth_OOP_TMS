#include "TMS.h"
#include "PriorityTask.h"
#include "CategorizedTask.h"
#include <iostream>

using namespace std;

int main() {
    TMS* tms = new TMS();

    // Creating individual tasks
    BaseTask* task1 = new PriorityTask("Finish Assignment", "Complete the math assignment", "2024-08-20", 1);
    BaseTask* task2 = new CategorizedTask("Buy Groceries", "Buy vegetables and fruits", "2024-08-17", "Shopping");
    BaseTask* task3 = new Task("Workout", "Do 30 minutes of exercise", "2024-08-18");

    // Adding tasks
    tms->addTask(task1);
    tms->addTask(task2);
    tms->addTask(task3);

    // Display tasks
    cout << "Tasks before sorting:" << endl;
    tms->viewTasks();

    // Sort tasks and display
    tms->sortTasksByDeadline();
    cout << "Tasks after sorting by deadline:" << endl;
    tms->viewTasks();

    // Complete a task and display updated list
    tms->completeTaskByTitle("Workout");
    cout << "Tasks after completing 'Workout':" << endl;
    tms->viewTasks();

    delete tms;
    return 0;
}
