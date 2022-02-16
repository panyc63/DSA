// List.cpp - Implementation of List ADT using Array
#include "List.h"  
using namespace std;

// constructor
List::List():size(0) , startNode(NULL) {}

List::~List() {
	Node* temp = startNode;
	while (temp != NULL) {
		startNode = startNode->next;
		delete temp;
		temp = NULL;
	}
}

// add an item to the back of the list (append)
bool List::add(ItemType item){
	Node *node = new Node;
	node->item = item;

	if (size != 0) {
		Node *temp = startNode;
		 
		for (int i = 1; i < size; i++){
			temp = temp->next;
		}
		temp->next = node;
		node->next = NULL;
	}
	else {
		startNode = node;
		startNode->next = NULL;

	}  
	size++;
	return true;

}

// add an item at a specified position in the list (insert)
bool List::add(int index, ItemType item) {
	if (size > index) {
		Node* temp = startNode;
		for (int i = 1; i < index; i++) {
			temp = temp->next;
		}

		Node *itemNode = new Node;
		itemNode->item = item;
		itemNode->next = temp->next;
		temp->next = itemNode;
		size++;
		return true;
	}
	else {
		return false;
	}
}



// remove an item at a specified position in the list
void List::remove(int index){
	//if first position
	if (index == 0) {
		startNode = startNode->next;
		
	}
	else if (size >= index) {

		Node* temp = startNode;
		Node* temp2 = new Node;
		//temp+=1 until reach index; 
		for (int i = 1; i < index; i++) {
			temp = temp->next;
		}
		temp2 = temp->next;
		temp->next = temp2->next;
	}
	size -= 1;

	
}

// get an item at a specified position of the list (retrieve)
ItemType List::get(int index)
{
	Node* temp = startNode;
	if (size > index) {
		for (int i = 0; i < index; i++) {
			temp = temp->next;
		}
		return temp->item;
	}
}

// check if the list is empty
bool List::isEmpty() {
	if (size == 0) {
		return true;
	}
	else {
		return false;
	}
}

// check the size of the list
int List::getLength() { return size; }

// display the items in the list
void List::print() {
	Node* temp = startNode;
	for (int i = 0; i < size; i++) {
		cout << temp->item << endl;
		temp = temp->next;
	}
}

// replace the  item in the specified index in the list
void List::replace(int index, ItemType item) {
	
	Node* temp = startNode;

	for (int i = 0; i < index; i++) {
		temp = temp->next;
	}
	
	Node* nodeItem = new Node;
	nodeItem->item = item;
	temp->next = nodeItem;

}