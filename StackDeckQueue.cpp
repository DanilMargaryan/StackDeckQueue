#include <iostream>
#include "Elem.h"
#include "Stack.h"

#include <stack>
using namespace std;


int main()
{
    Stack st1;
    st1.push(5);
    st1.push(1);
    st1.push(3);

    // print stack
    cout << "Stack: " << endl;
    st1.print();
    cout << endl;


    // pop elem and print it
    Elem* el = st1.pop();
    int a = (*el).getkey();
    cout << "a: " << a << endl;
    cout << endl;

    // print stack
    cout << "Stack: " << endl;
    st1.print();
    cout << endl;

    return (0);
}