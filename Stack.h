#pragma once

#include "Elem.h"

class Stack
{
protected:
    Elem* head; // ��������� �� ������ �����

public:
    Stack();

    void init(int inf);

    Elem* pop();

    void push(Elem* el);

    void print();
};
