#pragma once
#include "Stack.h"

class Queue : public Stack
{
private:
	Elem* tail;

public:
	Queue();

	void push(Elem*) override; //to tail
	void push(int key) override;
};