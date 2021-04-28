#pragma once
#include "Stack.h"

class Queue : Stack
{
private:
	Elem* tail;

public:
	Queue();

	void push(Elem*); //to tail

	Elem* pop();	  // from head
};