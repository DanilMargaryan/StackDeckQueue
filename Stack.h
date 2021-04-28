#pragma once

#include "Elem.h"

class Stack
{
protected:
    Elem* head; // ”казатель на начало стека

public:

    Stack();
    void init(int key);
    void antiInit(int size);
    Elem* pop();

    void push(Elem* el);
    void push(int key);

    void print();
};
