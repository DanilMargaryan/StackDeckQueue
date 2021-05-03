#pragma once
#include <iostream>
using namespace std;

template <class T>
class Elem
{
private:
    T key;
    Elem* next;

public:
    Elem(T key);
    void print();
    T getkey();

    friend class Stack;
};

template <typename T>
Elem<T>::Elem(T key)
{
    this->key = key;
    this->next = nullptr;
}

template <typename T>
void Elem<T>::print()
{
    cout << this->key;
}

template <typename T>
T Elem<T>::getkey()
{
    return this->key;
}
