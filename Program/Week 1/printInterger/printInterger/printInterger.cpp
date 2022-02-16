

#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter a 5 digit integer: ";
	cin >> x;
	int mod = 100000;
	int div = 10000;
	for (int i = 0; i < 5; i++)
	{
		int result = (x % mod) / div;
		div /= 10;
		mod /= 10;
		cout << result;
		for (int i = 0; i < 4; i++) {
			cout << " ";
		}
	}




}

