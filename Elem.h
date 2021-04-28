#pragma once
#include <iostream>

class Elem
{
private:
    int inf;
    Elem* next;


public:
    Elem(int inf);
    void print();

    friend class Stack;
};