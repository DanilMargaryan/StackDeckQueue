#pragma once
#include "Stack.h"

class Queue : public Stack
{
protected:
	Elem* tail;

public:
	Queue();

	Elem* pop();
	void push(Elem* el);
	void push(int key);
};