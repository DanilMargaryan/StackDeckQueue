#include "Queue.h"

Queue::Queue()
{
	head = nullptr;
	tail = nullptr;
}

void Queue::push(Elem* el)
{
    if (head == nullptr)
        head = tail = el;
    else
        tail = tail->next = el;  // равно работает справ налево
}

void Queue::push(int key)
{
    push(new Elem(key));
}

