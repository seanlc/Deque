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
    myDeque.print();
}

int main()
{
//    test_ctor_dtor();
    test_push_front();
    return 0;
}
