#include "Stack.h"

using namespace std;

Stack::Stack()
{
    this->head = nullptr;
}

void Stack::init(int size)
{
    for (int i = 0; i < size; i++)
        push(i);
}

Elem* Stack::pop()
{
    Elem* tmp = this->head;

    this->head = this->head->next;
    tmp->next = nullptr;
    return (tmp);
}

void Stack::push(Elem* el)
{
    if (this->head == nullptr)
        this->head = el;
    else
    {
        el->next = head;
        head = el;
    }
}

void Stack::push(int key)
{
    push(new Elem(key));
}

void Stack::print()
{
    Elem* tmp = this->head;

    while (tmp != nullptr)
    {
        cout << "Elem: ";
        cout << tmp->key << endl;
        tmp = tmp->next;
    }
}