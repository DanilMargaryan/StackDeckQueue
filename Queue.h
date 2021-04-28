#pragma once
#include "Stack.h"

class Queue : public Stack
{
private:
	Elem* tail;

public:
	Queue();

	void push(Elem*); //to tail
	void push(int key);
};