#include "Elem.h"

using namespace std;

Elem::Elem(int inf)
{
    this->inf = inf;
    this->next = nullptr;
}

void Elem::print()
{
    cout << inf;
}