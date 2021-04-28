#pragma once

#include "Elem.h"

class Stack
{
protected:
    Elem* head; // ”казатель на начало стека

public:

    Stack();
    void init(int key);
    Elem* pop();

    virtual void push(Elem* el);
    virtual void push(int key);

    void print();
};
