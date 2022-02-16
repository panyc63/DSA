#pragma once
#include "Stack.h"
#include <string>

Stack::Stack() : topNode(NULL) {}

Stack::~Stack() {
	Node* temp = topNode;
	while (temp != NULL ) {

		topNode = topNode->next;
		delete temp;
		temp = NULL;
	}

}

bool Stack::isEmpty() {
	if (topNode == NULL) {
		return true;
	}
	else {
		return false;
	}
}

bool Stack::push(ItemType& item) {
	Node* temp = new Node;
	temp->item = item;
	temp->next = topNode;
	topNode = temp;
	return true;
}

bool Stack::pop() {
	Node* temp = topNode;
	temp->item =  "";
	topNode = temp->next;
	delete temp;
	return true;
}

bool Stack::pop(ItemType& item) {
	item = topNode->item;
	pop();
	return true;
}

void Stack::getTop(ItemType& item) {
	item = topNode->item;
}

void Stack::displayInOrder() {
	Node* temp = topNode;
	while (temp != NULL) {
		std::cout << temp->item << "  ";
		temp = temp->next;

	}
	std::cout << endl;
}

void Stack::displayInOrderOfInsertion() {
	Node* temp = topNode;
	Stack s;
	while (temp != NULL) {
		s.push(temp->item);
		temp = temp->next;
	}
	s.displayInOrder();

}