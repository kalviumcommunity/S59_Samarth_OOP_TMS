#ifndef BASETASK_H
#define BASETASK_H

#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class BaseTask {
public:
    virtual ~BaseTask() {}

    // Abstract Methods
    virtual void displayTaskDetails() const = 0;
    virtual string getTitle() const = 0;
    virtual void setTitle(const string& title) = 0;
};

#endif
