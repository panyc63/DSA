// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Queue.h"
#include "Customer.h"
#include <iostream>
#include <ctime>
using namespace std;

void addCustomer(Queue&, int&);

int main()
{
	Queue queueList;
	queueList.~Queue();
	srand(time(0));
	int time = 0;
	int totalCust = 0;

	while (time != 10) {
		time++;
		ItemType item;
		if (!queueList.isEmpty()) {
			queueList.dequeue(item);
			cout << "Customer " << item.getName() << " was served in " << to_string(time - item.getQueueNum()) << " Min(s)" << endl;

		}
		int randNum = rand() % 4;
		if (randNum == 1) {
			totalCust += 1;
			addCustomer(queueList, time);
		}
		else if (randNum == 2) {
			totalCust += 2;
			addCustomer(queueList, time);
			addCustomer(queueList, time);

		}

	}
	cout << "In this " << to_string(time) << "-min period, the average time to be served = " << to_string(time / totalCust) << endl;

}


void addCustomer(Queue& queueList, int& Qnum) {
	//Add one customer
	cout << "Enter Customer name: ";
	ItemType item;
	string name;
	getline(cin, name); // if user adds first name and last name
	item.setName(name);
	item.setQueueNum(Qnum);
	queueList.enqueue(item);

}