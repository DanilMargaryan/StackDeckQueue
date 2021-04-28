#include <iostream>
#include "Elem.h"
#include "Stack.h"
#include "Queue.h"
#include "Deque.h"
using namespace std;


int main()
{
    Deque s;
    s.push_back(1);
    s.print();

    cout << endl;

    s.pop_back();
    s.print();

    cout << endl;
    
    s.pop();

    s.pop_front();
    s.print();

    return (0);
}