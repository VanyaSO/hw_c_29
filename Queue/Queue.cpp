#include "Queue.h"
Queue::Queue(int len): List()
{
    _maxQueueLen = len;
}

bool Queue::isEmpty() const
{
    return _length == 0;
}

bool Queue::isFull() const
{
    return _length == _maxQueueLen;
}

void Queue::add(int el)
{
    if (!isFull())
        List::add(el);
}

int Queue::del()
{
    if (!isEmpty())
    {
        return List::del();
    }
}