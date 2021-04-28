#pragma once

#include "Elem.h"

class Stack
{
private:
    Elem* head; // ”казатель на начало стека

public:

    Stack();
    void init(int key);
    Elem* pop();

    void push(Elem* el);
    void push(int key);

    void print();
};
