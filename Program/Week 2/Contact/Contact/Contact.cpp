#include <iostream>
using namespace std;

#include "List.h"
#include "Person.h"

int main()
{
	int opt;
	List l1 = List();

	do {
		cout << "\n----------------------" << endl;
		cout << "[1]  List the phone numbers" << endl;
		cout << "[2]  Add a new contact" << endl;
		cout << "[3]  Remove a contact" << endl;
		cout << "[4]  Search for a phone number" << endl;
		cout << "[0]  Exit" << endl;
		cout << "----------------------\n" << endl;

		cout << "Enter option: ";
		cin >> opt;
		if (opt == 1) {
			l1.print();
		} else if (opt == 2) {
			string name;
			string telno;
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter Phone Number: ";
			cin >> telno;
			l1.add(Person(name,telno));
			
		} else if (opt == 3) {
			l1.print();
			int index;
			cout << "Please enter index of the Contact Number to remove: ";
			cin >> index;

			if (index > 0 && index < l1.getLength()){
				l1.remove(index);
			}

		}
		else if (opt == 4) {
			l1.print();
			string telno;
			cout << "Enter Phone Number: ";
			cin >> telno;
			bool found = false;
			for (int i = 0; i < l1.getLength(); i++) {
				string telNo = l1.get(i).getTelNo();
				if (telno == telNo) {
					cout << "Name: " << l1.get(i).getName() << " Phone Number: " << telNo << endl;
					found = true;
				}

			}
			if (found == false) { cout << "No User found with Phone Number\n" << endl; }		

		

		} else {
			if (opt != 0) {
				cout << "Invalid Input" << endl;

				break;
			}
		}


	
	} while (opt != 0);
}

void addList(List l1 , ItemType item) {

	l1.add(item);
}
