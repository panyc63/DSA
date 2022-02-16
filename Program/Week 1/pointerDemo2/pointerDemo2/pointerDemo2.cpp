// pointerDemo2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void changeValue(int x,int*y)
{
	x += 10;
	*y += 10;
}
int main()
{
	int x = 30;
	int y;
	y = x;

	changeValue(x, &y);
	cout << "Value X: " << x << endl;
	cout << "Value Y: " << y << endl;


}


