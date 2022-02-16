#pragma once
typedef int ItemType; 

class Stack {

private:
	struct Node {
		ItemType item;
		Node* next;
	};
	Node* topNode;
public:
	Stack();
	~Stack();
	bool isEmpty();

	bool push(ItemType&);

	bool pop();

	bool pop(ItemType& item);
	void getTop();

	void displayinOrder();



};



