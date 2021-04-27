#include <iostream>

using namespace std;

class Elem 
{
private:
    int inf;
public:
    Elem* next;
    
    Elem(int inf)
    {
        this->inf = inf;
        this->next = nullptr;
    }

    void print()
    {
        cout << inf;
    }
};

class Stack
{
private:
    Elem* head; // Указатель на начало стека

public:
    Stack()
    {
        this->head = nullptr;
    }

    void init(int inf)
    {

	}

    Elem* pop()
    {
        Elem* tmp = this->head;
        
        this->head = this->head->next;
        tmp->next = nullptr;
        return (tmp);
	}

    void push(Elem* el)
    {
        Elem* tmp = this->head;

        if (this->head == nullptr)
        {
            this->head = el;
            return;
        }
        while (tmp->next != nullptr)
            tmp = tmp->next;
        tmp->next = el;
    }

    void print()
    {
        Elem* tmp = this->head;

        while (tmp != nullptr)
        {
            cout << "Elem: ";
            tmp->print();
            cout << endl;
            tmp = tmp->next;
        }
	}
};

int main()
{
    Stack st;                   // Создали стек

    Elem* el = new Elem(5);     
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