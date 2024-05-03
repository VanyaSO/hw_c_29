#ifndef HW_C_29_QUEUE_H
#define HW_C_29_QUEUE_H
#include "../List/List.h"

class Queue : public List
{
    int _maxQueueLen;

public:
    Queue(int len);
    ~Queue();

    bool isEmpty() const;
    bool isFull() const;

    void add(int) override;
    int del() override;
};


#endif
