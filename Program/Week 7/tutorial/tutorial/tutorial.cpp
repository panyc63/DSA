#include <iostream>
using namespace std;
int f(int n);

int main()
{
    cout << "The value of f(8) is " << f(8) << endl;
    return 0;
}

// pre: n >= 0 
int f(int n)
{
    cout << "Function entered with n = " << n << endl;
    if ((n >= 0) && (n <= 2)) {
        cout << "value2:" << n+1 << endl;
        return  n + 1;
    }
    else {
        cout << "value1:" << n << endl;
        return f(n - 2) * f(n - 4);
    }
}
