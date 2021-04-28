#pragma once

#include "Elem.h"

class Stack
{
private:
    Elem* head; // ”казатель на начало стека

public:
    Stack();

    void init(int inf);

    Elem* pop();

    void push(Elem* el);

    void print();
};
