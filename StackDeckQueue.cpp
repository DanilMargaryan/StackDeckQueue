#include <iostream>
#include "Elem.h"
#include "Stack.h"

#include <stack>
using namespace std;


int main()
{
    Stack st;                   // Создали стек
    
    Elem* el = new Elem(5);     // Создание эл. стека
    st.push(el);

    Elem* el1 = new Elem(4);     
    st.push(el1);

    Elem* el2 = new Elem(3);     
    st.push(el2);

    Elem* el3 = new Elem(2);     
    st.push(el3);

    cout << "Old:" << endl;
    st.print();

    cout << endl << "Pop:";
    Elem* el5 = st.pop();
    (*el5).print();
    cout << endl;

    cout << "New:" << endl;
    st.print();

    // Что такое init
}