#ifndef BASETASK_H
#define BASETASK_H

#include <iostream>
using namespace std;

class BaseTask {
public:
    virtual void displayTaskDetails() const = 0; // Pure virtual function
    virtual void completeTask() = 0; // Pure virtual function
    virtual string getTitle() const = 0; // Pure virtual function
    virtual string getDeadline() const = 0; // Pure virtual function
    virtual ~BaseTask() {} // Virtual destructor
};

#endif
