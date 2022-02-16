#include "Dictionary.h"


Dictionary::Dictionary():size(0),items(){
	for (int i = 0; i < MAX_SIZE; i++) {
		items[i] = NULL;
	}
}

Dictionary::~Dictionary() {
	
}
int charvalue(char c)
{
	if (isalpha(c))
	{
		if (isupper(c))
			return (int)c - (int)'A';
		else
			return (int)c - (int)'a' + 26;
	}
	else
		return -1;
}


int Dictionary::hash(KeyType key) {
	int hash = 0;
	for (int i = 0; i < key.length(); i++) {
		hash += charvalue(key[i]);
	}

	return hash % MAX_SIZE;
}


bool Dictionary::add(KeyType newKey, ItemType newItem){
	int index = hash(newKey);

	Node* temp = new Node;
	temp->item = newItem;
	temp->key = newKey;
	temp->next = NULL;

	if (items[index] == NULL) {
		items[index] = temp;
	}
	else {
		Node* current = items[index];

		if (current->key == newKey) { return false; }
		while (current->next != NULL) {
			current = current->next;
			if (current->key == newKey) { //duplicate data
				return false;
			}
		}		
		current->next = temp;
	}
	size++;
	return true;
}

void Dictionary::remove(KeyType key) {
	int index = hash(key);

	if (items[index] != NULL) {
		Node* current = items[index];

		while (current->key != key){
			current = current->next;
		}
		if (current->next == NULL) {
			items[index] = NULL;
			size--;
		}
		delete current;
	}

}

ItemType Dictionary::get(KeyType key) {

	for (int i = 0; i < size; i++) {
		if (items[i]->key == key) {
			return items[i]->item;
		}
	}

}

bool Dictionary::isEmpty() {
	if (size == 0) {
		return false;
	}
	return true;
}

int Dictionary::getLength() {
	return size;
}

void Dictionary::print() {
	for (int i = 0; i < MAX_SIZE; i++) {
		Node* temp = items[i];
		if (temp != NULL)
		{
			std::cout <<items[i]->key << ", " <<items[i]->item << endl;
			temp = temp->next;
		}
	}

}