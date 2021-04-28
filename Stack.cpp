#include "Stack.h"

using namespace std;

Stack::Stack()
{
    this->head = nullptr;
}

void Stack::init(int size)
{
    while (size--)
        this->push(new Elem(0));
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
    Elem* tmp = this->head;

    if (this->head == nullptr)
    {
        this->head = el;
        return;
    }
    while (tmp->next != nullptr)
        tmp = tmp->next;
    tmp->next = el;
}

void Stack::print()
{
    Elem* tmp = this->head;

    while (tmp != nullptr)
    {
        cout << "Elem: ";
        tmp->print();
        cout << endl;
        tmp = tmp->next;
    }
}