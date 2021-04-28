#pragma once
#include "Stack.h"

class Queue : public Stack
{
protected:
	Elem* tail;

public:
	Queue();

	void push(Elem*);
	void push(int key);
};