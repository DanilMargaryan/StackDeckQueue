#pragma once
#include "class_Elem.h"
using namespace std;

class Stack
{
protected:
    Elem* head;

public:
    Stack();

    void init(int key);
    void antiInit(int size);
    virtual Elem* pop();
    virtual void push(Elem* el);
    virtual void push(int key);
    void print();
};

Stack::Stack()
{
    this->head = nullptr;
}

void Stack::init(int size)
{
    for (int i = 0; i < size; i++)
        push(i);
}

void Stack::antiInit(int size)
{
    while (size--)
        pop();
}

Elem* Stack::pop()
{
    if (head == nullptr)
        return (nullptr);
    Elem* tmp = head;

    head = head->next;
    tmp->next = nullptr;
    return (tmp);
}

void Stack::push(Elem* el)
{
    if (this->head == nullptr)
        this->head = el;
    else
    {
        el->next = head;
        head = el;
    }
}

void Stack::push(int key)
{
    push(new Elem(key));
}

void Stack::print()
{
    Elem* tmp = head;

    cout << "PRINT: " << endl;
    while (tmp != nullptr)
    {
        cout << "el: ";
        cout << tmp->key << endl;
        tmp = tmp->next;
    }
    cout << endl;
}