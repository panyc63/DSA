// StackDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"
using namespace std;

void initStack(Stack&);
void pushStack(Stack&, int);

int main()
{
	Stack s;
	initStack(s);
	ItemType item;
	s.getTop(item);
	cout <<"Top of the stack is: "<< item <<endl;
	s.displayInOrderOfInsertion();

	s.pop();
	s.displayInOrderOfInsertion();

}

void initStack(Stack &s) {
	pushStack(s, 3);
	pushStack(s, 4);
}
void pushStack(Stack &s,int num) {
	ItemType item = num;
	s.push(item);
}


