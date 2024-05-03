#include "List.h"

List::List(): _head(nullptr), _length(0U) {};

List::List(const List &list)
{
    while(_head != nullptr)
    {
        del();
    }

    Node* node = list._head;

    while (list._head != nullptr)
    {
        add(node->_data);

        node = node->_next;
    }
}

List::~List()
{
    while(_head != nullptr)
    {
        del();
    }
}

void List::add(int data)
{
    Node* newNode = new Node(data);

    if (_head == nullptr)
    {
        _head = newNode;
    }
    else
    {
        Node* temp = _head;
        _head = newNode;
        newNode->_next = temp;
    }
    _length++;
}

int List::del()
{
    if (_head != nullptr)
    {
        Node* node = _head;
        _head = _head->_next;
        delete node;
        _length--;
    }
}

void List::show()
{
    Node* node = _head;
    while(node != nullptr)
    {
        cout << node->_data << endl;
        node = node->_next;
    }
}
