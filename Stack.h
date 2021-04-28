#pragma once

#include "Elem.h"

class Stack
{
protected:
    Elem* head; // ��������� �� ������ �����

public:

    Stack();
    void init(int key);
    void antiInit(int size);
    Elem* pop();

    void push(Elem* el);
    void push(int key);

    void print();
};
