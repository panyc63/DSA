
#include <iostream>
using namespace std;

long power(int, int);
void printBackward(int[], int);
int maxArray(int[] , int ,int);

int main()
{
	int valueA, valueN;
	cout << "Enter value: ";
	cin >> valueA;
	cout << "Enter value of power: ";
	cin >> valueN;
	long poweraft = power(valueA, valueN);
	cout << poweraft << "\n"<< endl;

	int ary[] = { 1,2,4,5,30 };
	printBackward(ary, 4);

	int max = maxArray(ary, 0, 4);
	cout << max << endl;
}

long power(int a , int n) {
	for (int i = 1; i < n; i++) {
		a *= a;
	}
	if (a > 0) {
		
		return a;
	}
	else {
		power(a, n);
	}
}

void printBackward(int array[], int n) {
	if (n == 0) {
		cout << array[n] << "\n"<< endl;
	}
	else {
		cout << array[n] << " , ";
		return printBackward(array, n - 1);
	}
}

int maxArray(int array[], int start, int end) {
	if (start == end) {
		return start;
	}
	else {
		return maxArray(array, start + 1, end);
	}
}