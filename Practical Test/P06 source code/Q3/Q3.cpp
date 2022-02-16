// Q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TwoStacks.h"
using namespace std;

int main()
{
    TwoStacks ts;
    ts.push1(10);
    ts.push1(5);
    ts.push1(4);
    ts.push1(6);
    ts.push1(8);

    ts.push2(7);
    ts.push2(2);
    ts.push2(11);

    ts.printStack1();
    ts.printStack2();

    return 0;
}

