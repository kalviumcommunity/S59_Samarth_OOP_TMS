#include "PriorityTask.h"

int main() {
    // Default Priority Task
    PriorityTask pt1;
    pt1.setTitle("Finish Assignment");
    pt1.setDescription("Complete the math assignment");
    pt1.setDeadline("2024-08-20");
    pt1.setPriorityLevel(1);
    pt1.displayTaskDetails();

    cout << "----------------------" << endl;

    PriorityTask pt2("Buy Groceries", "Buy vegetables and fruits", "2024-08-17", 2);
    pt2.displayTaskDetails();

    cout << "----------------------" << endl;

    PriorityTask pt3("Workout", "Do 30 minutes of exercise", "2024-08-18", 5); // Invalid priority
    pt3.displayTaskDetails();

    return 0;
}
