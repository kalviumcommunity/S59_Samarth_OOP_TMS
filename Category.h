#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>
using namespace std;

class Category {
protected:
    string categoryName;

public:
    Category() : categoryName("General") {}
    Category(string name) : categoryName(name) {}

    void setCategory(const string& name) { categoryName = name; }
    string getCategory() const { return categoryName; }
};

#endif
