#include <iostream>
#include <string>
#include "Stack.h"
int main()
{
    Stack back_stack;
    Stack front_stack;
    string temp;

    while (temp != "0")
    {
        ItemType urlLink = "Empty";

        if (!back_stack.isEmpty())
        {
            back_stack.getTop(urlLink);
        } 
        cout << "Current URL: " << urlLink << endl;
        cout << "[1] Visit URL\n[2] Back\n[3] Front\n[4] Display History\n[5] Display History in Insertion Order\n[0] Exit\nYour Choice: ";
        cin >> temp;
        if (temp == "0") {
            break;
        }
        else if (temp =="1") {
            string website;
            cout << "Website URL: ";
            cin >> website;
            back_stack.push(website);
            while (!front_stack.isEmpty()) {
                front_stack.~Stack();
            }

        }
        else if (temp == "2") {
            if (!back_stack.isEmpty()) {
                ItemType item;
                back_stack.getTop(item);
                front_stack.push(item);
                back_stack.pop();

            }
            else {
                cout << "\n===== No History =====\n" << endl;
            }
           
        }
        else if (temp == "3") {
            if (!front_stack.isEmpty()) {
                ItemType item;
                front_stack.getTop(item);
                front_stack.pop();
                back_stack.push(item);
            }
            else {
                cout << "\n===== This is the latest URL =====\n" << endl;
            }
        }
        else if (temp == "4") {
            if (!back_stack.isEmpty()) {
                back_stack.displayInOrder();
            }
            else {
                cout << "\n===== No History =====\n" << endl;
            }
        }
        else if (temp == "5") {
            if (!back_stack.isEmpty()) {
                back_stack.displayInOrderOfInsertion();
            }
            else {
                cout << "\n===== No History =====\n" << endl;
            }
        }
    }
    return 0;
}
