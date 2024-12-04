#include "TMS.h"
#include "Task.h"
#include <iostream>

using namespace std;

int main() {
    TMS* tms = new TMS();

    // Using parameterized constructor
    Task* task1 = new Task("Finish Assignment", "Complete the math assignment", "2024-08-20");
    Task* task2 = new Task("Buy Groceries", "Buy vegetables and fruits", "2024-08-17");

    // Using default constructor
    Task* task3 = new Task();
    task3->setTitle("Workout");
    task3->setDescription("Do 30 minutes of exercise");
    task3->setDeadline("2024-08-18");

    tms->addTask(*task1);
    tms->addTask(*task2);
    tms->addTask(*task3);

    cout << "Tasks before sorting:" << endl;
    tms->viewTasks();
    Task::getTaskStats();

    tms->sortTasksByDeadline();

    cout << "Tasks after sorting by deadline:" << endl;
    tms->viewTasks();

    tms->completeTaskByTitle("Workout");

    cout << "Tasks after completing 'Workout':" << endl;
    tms->viewTasks();
    Task::getTaskStats();

    // Clean up memory and trigger destructors
    delete task1;
    delete task2;
    delete task3;
    delete tms;

    return 0;
}
 