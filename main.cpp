#include "TMS.h"
#include "Task.h"
#include <iostream>

using namespace std;

int main() {
    TMS tms;

    // Creating an array of Task objects
    Task taskArray[3] = {
        Task("Finish Assignment", "Complete the math assignment", "2024-08-20"),
        Task("Buy Groceries", "Buy vegetables and fruits", "2024-08-17"),
        Task("Workout", "Do 30 minutes of exercise", "2024-08-18")
    };

    // Adding tasks from the array to the TMS system
    for (int i = 0; i < 3; ++i) {
        tms.addTask(taskArray[i]);
    }

    cout << "Tasks before sorting:" << endl;
    tms.viewTasks();

    tms.sortTasksByDeadline();

    cout << "\nTasks after sorting by deadline:" << endl;
    tms.viewTasks();

    tms.completeTaskByTitle("Workout");

    cout << "\nTasks after completing 'Workout':" << endl;
    tms.viewTasks();

    return 0;
}
