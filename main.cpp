#include "TMS.h"
#include "Task.h"
#include <iostream>

using namespace std;

int main() {
    TMS* tms = new TMS();

    Task* task1 = new Task("Finish Assignment", "Complete the math assignment", "2024-08-20");
    Task* task2 = new Task("Buy Groceries", "Buy vegetables and fruits", "2024-08-17");
    Task* task3 = new Task("Workout", "Do 30 minutes of exercise", "2024-08-18");

    tms->addTask(*task1);
    tms->addTask(*task2);
    tms->addTask(*task3);

    cout << "Tasks before sorting:" << endl;
    tms->viewTasks();
    cout << "Total tasks created: " << Task::getTotalTasks() << endl;

    tms->sortTasksByDeadline();

    cout << "Tasks after sorting by deadline:" << endl;
    tms->viewTasks();
    
    tms->completeTaskByTitle("Workout");

    cout << "Tasks after completing 'Workout':" << endl;
    tms->viewTasks();

    cout << "Total tasks completed: " << Task::getCompletedTasks() << endl;

    delete task1;
    delete task2;
    delete task3;
    delete tms;

    return 0;
}
