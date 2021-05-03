#pragma once
#include "class_Elem.h"
using namespace std;

template <class T>
class Stack
{
protected:
    Elem* head;

public:
    Stack();

    void init(int key);
    void antiInit(int size);
    virtual Elem* pop();
    virtual void push(Elem* el);
    virtual void push(T key);
    void print();
};

template <typename T>
Stack<T>::Stack()
{
    this->head = nullptr;
}

template <typename T>
void Stack<T>::init(int size)
{
    for (int i = 0; i < size; i++)
        push(i);
}

template <typename T>
void Stack<T>::antiInit(int size)
{
    while (size--)
        pop();
}

//44 ?
template <typename T>
Elem<T>* Stack<T>::pop()
{
    if (head == nullptr)
        return (nullptr);
    Elem* tmp = head;

    head = head->next;
    tmp->next = nullptr;
    return (tmp);
}

//57?
template <typename T>
void Stack<T>::push(Elem<T>* el)
{
    if (this->head == nullptr)
        this->head = el;
    else
    {
        el->next = head;
        head = el;
    }
}

template <typename T>
void Stack<T>::push(T key)
{
    push(new Elem(key));
}

template <typename T>
void Stack<T>::print()
{
    Elem* tmp = head;

    cout << "PRINT: " << endl;
    while (tmp != nullptr)
    {
        cout << "el: ";
        cout << tmp->key << endl;
        tmp = tmp->next;
    }
    cout << endl;
}