#ifndef HW_C_29_STACK_H
#define HW_C_29_STACK_H
#include "../List/List.h"

class Stack : public List
{
    const int EMPTY = -1;
    int FULL = 10;

    int top;

public:
    Stack();
    void add(int) override;
    int del() override;
    int getCount();
    bool isEmpty();
    bool isFull();
    int getTop();
    void clear();
};


#endif
