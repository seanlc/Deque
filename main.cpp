#include <iostream>
#include "Deque.h"

using namespace std;

void test_ctor_dtor()
{
    Deque myDeque;
}

void test_push_front()
{
    Deque myDeque;
    for(int i = 0; i < 100; ++i)
	myDeque.push_front(i);
    cout << "in order print" << endl;
    myDeque.print();
    cout << "reverse print" << endl;
    myDeque.revPrint();
}

void test_push_back()
{
    Deque myDeque;
    for(int i = 0; i < 100; ++i)
	myDeque.push_back(i);
    cout << "in order print" << endl;
    myDeque.print();
    cout << "reverse print" << endl;
    myDeque.revPrint();
}

void test_pop_back()
{
    Deque myDeque;
    for(int i = 0; i < 100; ++i)
	myDeque.push_back(i);
    cout << "val popped from back " << myDeque.pop_back() << endl;
    myDeque.print();
    cout << "rev print" << endl;
    myDeque.revPrint();
}

void test_peek_back()
{
    Deque myDeque;
    for(int i = 0; i < 100; ++i)
	myDeque.push_back(i);
    cout << "val popped from back " << myDeque.peek_back() << endl;
    myDeque.print();
    cout << "rev print" << endl;
    myDeque.revPrint();

}

int main()
{
//    test_ctor_dtor();
//    test_push_front();
//    test_push_back();
//    test_pop_back();
    test_peek_back();
    return 0;
}
