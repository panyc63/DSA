
#include <iostream>
#include "Queue.h"

using namespace std;

void initList(Queue&);

void checkPail();

int main()
{
	Queue queueList;
	initList(queueList);
	ItemType item;
	queueList.getFront(item);
	queueList.displayItems();
	queueList.dequeue();
	queueList.displayItems();
	checkPail();



}

void initList(Queue &queueList){
	queueList.enqueue('a');
	queueList.enqueue('b');
}

void checkPail( ) {
    char string1[20];
    int i, length;
    int flag = 0;

    cout << "Enter a string: "; 
    cin >> string1;

    length = strlen(string1);

    for (i = 0; i < length; i++) {
        if (string1[i] != string1[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        cout << string1 << " is not a palindrome" << endl;
    }
    else {
        cout << string1 << " is a palindrome" << endl;
    }
}
