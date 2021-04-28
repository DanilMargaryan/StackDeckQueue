#pragma once
#include <iostream>

class Elem
{
private:
    int key;
    Elem* next;

public:
    Elem(int key);
    int getkey();

    friend class Stack;
};