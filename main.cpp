#include "TMS.H"
#include "PriorityTask.h"
#include "CategorizedTask.h"
#include <iostream>

using namespace std;

int main() {
    TMS* tms = new TMS();

    
    Task* task1 = new PriorityTask("Finish Assignment", "Complete the math assignment", "2024-08-20", 1);
    Task* task2 = new CategorizedTask("Buy Groceries", "Buy vegetables and fruits", "2024-08-17", "Shopping");
    Task* task3 = new Task("Workout", "Do 30 minutes of exercise", "2024-08-18");

    
    tms->addTask(task1);
    vector<Task*> additionalTasks = { task2, task3 };
    tms->addTask(additionalTasks);  

    
    cout << "Tasks before sorting:" << endl;
    tms->viewTasks();

    
    tms->sortTasksByDeadline();
    cout << "Tasks after sorting by deadline:" << endl;
    tms->viewTasks();

    
    tms->completeTaskByTitle("Workout");
    cout << "Tasks after completing 'Workout':" << endl;
    tms->viewTasks();

    delete tms;
    return 0;
}
