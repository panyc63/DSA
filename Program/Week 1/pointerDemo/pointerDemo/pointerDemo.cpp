
#include <iostream>
using namespace std;
int main()
{
    int value1 = 200000;
    int value2;
    int * ptr;
    ptr = &value1;
    cout << "The value of ptr is: " << *ptr << endl;
    value2 = *ptr;
    cout << "The value of value2 is: " << value2 << endl;
    cout << "The address of value1 is: " << &value1 << endl;
    cout << "The address of ptr is: " << ptr << endl;
    // the address of ptr and value1 is the same as ptr is assigned the address of value1.
   
    ptr = &value2;
    *ptr += 2000;
    cout << "The value of value1 is: " << value1 << endl;
    cout << "The value of value2 is: " << value2 << endl;
    // value2 increased even though it was ptr that was added. 
    // ptr is assigned the same address as value2, so when ptr added
    // 2000 to the value, value2 also added 2000 as they share the same address



}
