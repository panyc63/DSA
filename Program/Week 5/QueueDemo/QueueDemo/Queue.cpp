#include "Queue.h"

Queue::Queue():frontNode(NULL),backNode(NULL) {}
Queue::~Queue() {
	Node* temp = frontNode;
	while (temp != NULL) {
		frontNode = frontNode->next;
		delete temp;
		temp = NULL;
	}
}

bool Queue::enqueue(ItemType item) {
	Node *temp = new Node;
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
		temp->item = NULL;
		frontNode = temp->next;
		delete temp;
	}
	return true;
}

bool Queue::dequeue(ItemType &item) {

	Node* temp = frontNode;
	int size = getSize();
	for (int i = 0; i < size; i++) {
		if (temp->item != item) {
			temp = temp->next;
		}
		else {
			temp->item = item;
			return true;
		}
	}

	return false;
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
			cout << temp->item << endl;
			temp = temp->next;
		}
	}
}

int Queue::getSize() {
	int size = 0; 
	if (!isEmpty()) {
		Node* temp = frontNode;
		while (temp != NULL){
			size++;
			temp = temp->next;
		}
	}
	return size;
}