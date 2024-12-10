#ifndef BASETASK_H
#define BASETASK_H

#include <string>
using namespace std;

class BaseTask
{
public:
    virtual ~BaseTask() {}

    virtual void displayTaskDetails() const = 0;
    virtual string getTitle() const = 0;
    virtual void setTitle(const string &title) = 0;
    virtual bool isCompleted() const = 0;
    virtual void completeTask() = 0;
};

#endif
