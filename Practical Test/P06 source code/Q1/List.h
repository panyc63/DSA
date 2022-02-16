#pragma once
// List.h - - Specification of List ADT
#include <string>
#include <iostream>
using namespace std;


const int MAX_SIZE = 100;
typedef int ItemType;

class List
{
private:
    ItemType items[MAX_SIZE];
    int      size;

public:

    // constructor
    List();

    // add a new item to the back of the list (append)
    // pre : size < MAX_SIZE
    // post: new item is added to the back of the list
    // size of list is increased by 1
    bool add(ItemType newItem);

    // get an item at a specified position of the list (retrieve)
    // pre : 0 <= index <= size - 1
    // post: none
    ItemType get(int index);

    // check if the list is empty
    // pre : none
    // post: none
    // return true if the list is empty; otherwise returns false
    bool isEmpty();

    // check the size of the list
    // pre : none
    // post: none
    // return the number of items in the list
    int getLength();

    // print all items in the list
    // pre : size > 0
    // post: none
    void print();

    // reverse the items in the list
    // pre : none
    // post: none
    void reverse();
};
