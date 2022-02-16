#pragma once
// TwoStacks.h - Specification of TwoStacks ADT
#include <string>
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
typedef int ItemType;

class TwoStacks
{
private:
    ItemType items[MAX_SIZE];
    int top1;
    int top2;

public:

    // constructor
    TwoStacks();

    // Method to push newItem to stack1 
    bool push1(ItemType newItem);

    // Method to push newItem to stack2 
    bool push2(ItemType newItem);

    // Method to check if stack1 is empty
    bool isEmpty1();

    // Method to check if stack2 is empty
    bool isEmpty2();

    // Method print all items in stack1
    void printStack1();

    // Method print all items in stack2
    void printStack2();
 
};
