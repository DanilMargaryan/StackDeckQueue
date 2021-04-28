#include "Elem.h"

using namespace std;

Elem::Elem(int key)
{
    this->key = key;
    this->next = nullptr;
}

int Elem::getkey()
{
    return this->key;
}
