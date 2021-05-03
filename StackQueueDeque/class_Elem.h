#pragma once
#include <iostream>
using namespace std;

class Elem
{
private:
    int key;
    Elem* next;

public:
    Elem(int key);
    void print();
    int getkey();

    friend class Stack;
    friend class Queue;
    friend class Deque;
};

Elem::Elem(int key)
{
    this->key = key;
    this->next = nullptr;
}

void Elem::print()
{
    cout << this->key;
}

int Elem::getkey()
{
    return this->key;
}
