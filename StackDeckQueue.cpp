#include <iostream>
#include "Elem.h"
#include "Stack.h"
#include "Queue.h"
using namespace std;


int main()
{
    Queue q;
    q.init(5);
    q.print();

    cout << endl;

    q.pop();
    q.print();

    return (0);
}