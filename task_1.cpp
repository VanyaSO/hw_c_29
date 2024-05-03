#include "iostream"
using namespace std;
#include "./List/List.h"
#include "./Queue/Queue.h"
#include "./Stack/Stack.h"

//Завдання №1
//Створити базовий клас список. Реалізувати на базі
//списку стек і чергу з віртуальними функціями вставлення і видалення.

int main()
{
//    Queue q(10);
//    q.add(1);
//    q.add(2);
//    q.add(3);
//
//    q.show();
//
//    cout << "del:" << q.del() << endl;
//
//    q.show();

    Stack s;
    s.add(1);
    s.add(2);
    s.add(3);

    s.show();

    cout << "Count: " << s.getCount() << endl;
    s.clear();

    cout << "---Clear---" << endl;
    s.show();

    cout << "---Append---" << endl;
    s.add(1);
    s.add(75);
    s.add(7);
    s.show();

    cout << "---Top---" << endl;
    cout << s.getTop();


    return 0;
}