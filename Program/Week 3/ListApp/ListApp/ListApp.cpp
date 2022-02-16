

#include <iostream>
#include "List.h"
using namespace std;

void initList(List&);
void addList(List&, ItemType);
void addList(List&, ItemType, int);
void removeList(List&,int);

int main()
{
	List nameList;
	initList(nameList);
	nameList.print();
	cout << endl;
	addList(nameList,"Brenda",1);
	nameList.print();
	cout << endl;
	removeList(nameList,2);
	nameList.print();
	cout << endl;
	removeList(nameList, 0);
	nameList.print();
	
	

}

void initList(List &nameList) {
	nameList.add("Annie");
	nameList.add("Jacky");
	nameList.add("Wendy");

}
void addList(List &nameList,ItemType item) {
	nameList.add(item);
}

void addList(List  &nameList, ItemType item , int pos) {
	nameList.add(pos, item);
}

void removeList(List &nameList ,int pos) {
	nameList.remove(pos);
}