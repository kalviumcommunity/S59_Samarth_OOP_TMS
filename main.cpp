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
    Task::getTaskStats();

    tms->sortTasksByDeadline();

    cout << "Tasks after sorting by deadline:" << endl;
    tms->viewTasks();
    Task::getTaskStats();

    tms->completeTaskByTitle("Workout");

    cout << "Tasks after completing 'Workout':" << endl;
    tms->viewTasks();
    Task::getTaskStats();

    task1->setTitle("Complete Math Assignment");
    task1->setDescription("Finish the math homework and submit it online");
    task1->setDeadline("2024-08-19");

    cout << "Tasks after updating the title, description, and deadline of task1:" << endl;
    tms->viewTasks();

    delete task1;
    delete task2;
    delete task3;
    delete tms;

    return 0;
}
