// List.cpp - Implementation of List ADT using Pointers (Linked-implementation

#include "List.h"	// header file

// constructor
List::List()
{
	firstNode = NULL;
	size = 0;
}

// add a new item to the back of the list (append)
bool List::add(ItemType newItem)
{
	// create a new node to store the data item
	Node* newNode = new Node;
	newNode->item = newItem;
	newNode->next = NULL;

	if (isEmpty())
		firstNode = newNode;
	else
	{
		Node* temp = firstNode;
		while (temp->next != NULL)
			temp = temp->next;		// move to last node
		temp->next = newNode;		// make last node point to the new node
	}

	size++;

	return true;  // no size constraint
}

// get an item at a specified position of the list (retrieve)
ItemType List::get(int index)
{
	ItemType dataItem = -1;
	bool success = (index >= 0) && (index <= size-1);
	if (success)
	{
		Node* current = firstNode;
		for (int i = 1; i < index; i++)
			current = current->next;		// move to next node

		dataItem = current->item;
	}

	return dataItem;
}

// check if the list is empty
bool List::isEmpty()
{
	return size == 0;
}

// check the size of the list
int List::getLength()
{
	return size;
}

//------------------- Other useful functions -----------------
void List::print()
{
	Node* temp = firstNode;

	if (temp == NULL)
		cout << "The list is empty." << endl;
	else
	{
		while (temp != NULL)
		{
			cout << temp->item << endl;
			temp = temp->next;		// move to next node
		}
	}
}

void List::reverse()
{
	
}

void List::reverseR()
{

}
void List::reverseR(Node*& head)
{

}



