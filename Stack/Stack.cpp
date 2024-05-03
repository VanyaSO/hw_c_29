#include "Stack.h"
#include "iostream"
using namespace std;

Stack::Stack(): List()
{
    top = EMPTY;
}

void Stack::add(int el)
{
    if (!isFull())
    {
        List::add(el);
        top++;
    }
}

int Stack::del()
{
    if (!isEmpty())
    {
        top--;
        return List::del();
    }
    else
        return 0;
}

int Stack::getCount()
{
    return top;
}

bool Stack::isEmpty()
{
    return top == EMPTY;
}

bool Stack::isFull()
{
    return top == FULL;
}

void Stack::clear()
{
    while(_head != nullptr)
    {
        List::del();
    }
    top = EMPTY;
}

int Stack::getTop() {
    Node* node = _head;
    while(node->_next != nullptr)
    {
        node = node->_next;
    }
    return node->_data;
}

