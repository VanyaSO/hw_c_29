#ifndef HW_C_29_LIST_H
#define HW_C_29_LIST_H
#include "iostream"

using namespace std;

struct Node {
    int _data;
    Node* _next;

    explicit Node(int data) : _data(data), _next(nullptr) {};
};

class List {
protected:
    Node* _head;
    unsigned int _length;

    explicit List();
    List(const List&);
    ~List();

    virtual void add(int);
    virtual int del();


public:
    virtual void show();
};


#endif
