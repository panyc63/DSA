// Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "List.h"
using namespace std;

int main()
{
	List aList;

	aList.add(10);
	aList.add(4);
	aList.add(6);
	aList.add(3);
	aList.add(5);


	cout << "List before reversal:" << endl;

	aList.print();

	aList.reverse();

	cout << "\nList after reversal:" << endl;

	aList.print();

	return 0;

}

