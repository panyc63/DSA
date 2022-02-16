// PhoneBookApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dictionary.h"

void init(Dictionary*);
void add(KeyType,ItemType,Dictionary*);
void remove(KeyType key, Dictionary*);

int main()
{
	Dictionary dict;
	init(&dict);
	cout << "Initializing Dictionary" << endl;
	dict.print();
	cout << "\n Adding Eugene and Saiful"<< endl;

	add("Eugene" , "64608256",&dict);
	add("Saiful", "64608206", &dict);
	dict.print();
	cout << "\nAdding Poh Seng" <<endl;

	add("PohSeng", "64608687", &dict);
	cout << "\nDeleting Eugene\n" << endl;
	remove("Eugene",&dict);
	dict.print();


}

void init(Dictionary* dict) {
	dict->add("Pamela","64606722");
	dict->add("PohSeng", "64608687");
	dict->add("Wesley", "64607237");
	dict->add("WeeChong", "64606854");
}

void add(KeyType key, ItemType item,Dictionary* dict) {
	dict->add(key, item);
}

void remove(KeyType key, Dictionary* dict) {
	dict->remove(key);
}