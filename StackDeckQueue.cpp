#include <iostream>
#include "Elem.h"
#include "Stack.h"
#include "Queue.h"

#include <stack>
using namespace std;


int main()
{
    //// STACK EXAMPLE

    //// create stack
    //Stack st1;

    //// push to stack
    //st1.push(5);
    //st1.push(1);
    //st1.push(3);

    //// print stack
    //cout << "Stack: " << endl;
    //st1.print();
    //cout << endl;

    //// pop elem and print it
    //Elem* el = st1.pop();
    //int a = (*el).getkey();
    //cout << "a: " << a << endl;
    //cout << endl;

    //// print stack
    //cout << "Stack: " << endl;
    //st1.print();
    //cout << endl;

    // ? нужен деструктор для стека ? 

    // QUEUE EXAMPLE

    //// create queue
    //Queue q1;
    //q1.push(1);
    //q1.push(2);
    //q1.push(3);
    //q1.print();


    //Stack st1;
    //st1.push(1);
    //st1.push(2);
    //st1.push(3);
    //st1.print();

    Stack st1;
    st1.init(3);
    st1.print();

    return (0);
}