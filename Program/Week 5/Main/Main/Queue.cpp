#include "Queue.h"

Queue::Queue() :frontNode(NULL), backNode(NULL) {}
Queue::~Queue() {
	Node* temp = frontNode;
	while (temp != NULL) {
		frontNode = frontNode->next;
		delete temp;
		temp = NULL;
	}
}

bool Queue::enqueue(ItemType item) {
	
	Node* temp = new Node;

	temp->item = item;
	temp->next = NULL;

	if (isEmpty()) {
		frontNode = temp;
	}
	else {
		backNode->next = temp;
	}
	backNode = temp;
	return true;
}

bool Queue::dequeue() {
	if (frontNode == backNode) {
		frontNode = NULL;
		backNode = NULL;
	}
	else {
		Node* temp = frontNode;
		frontNode = frontNode->next;
		delete temp;
	}
	return true;
}

bool Queue::dequeue(ItemType& item) {

	item = frontNode->item;
	dequeue();
	return true;
}

void Queue::getFront(ItemType& item) {
	item = frontNode->item;
}

bool Queue::isEmpty() {
	if (frontNode == NULL) { return true; }
	return false;
}

void Queue::displayItems() {
	if (!isEmpty()) {
		Node* temp = frontNode;
		while (temp != NULL) {
			cout << "Name: " << temp->item.getName()  << " Queue Number: " << temp->item.getQueueNum() << endl;
			temp = temp->next;
		}
	}
}

int Queue::getSize() {
	int size = 0;
	if (!isEmpty()) {
		Node* temp = frontNode;
		Node* temp2 = temp;
		while (temp != NULL) {
			size++;
			temp2 = temp->next;
		}
	}
	return size;
}