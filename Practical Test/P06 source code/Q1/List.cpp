// List.cpp - Implementation of List ADT using Array

#include "List.h"  //header file
#include <iostream>

using namespace std;
// constructor
List::List()
{
    size = 0;
}

// add a new item to the back of the list (append)
bool List::add(ItemType newItem)
{
    bool success = size < MAX_SIZE;
    if (success)
    {
        items[size] = newItem; // add to the end of the list
        size++;                // increase the size of the list by one
    }
    return success;
}

// get an item at a specified position of the list (retrieve)
ItemType List::get(int index)
{
    ItemType dataItem = -1;
    bool success = (index >= 0) && (index < size);
    if (success)
        dataItem = items[index];

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

void List::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << get(i)<< endl;
    }
}

void List::reverse()
{
    List temp[MAX_SIZE];
    for (int i = getLength(); i < 0; i--) {
        cout << items[i];
    } 
    for (int i = 0; i < MAX_SIZE; i++) {
        items[i] = temp->get(i);
    }
    
}