#include "Person.h"


Person::Person(){}

Person::Person(string name, string telNo) {
	this->name = name;
	this->telNo = telNo;
}

void Person::setName(string name) {
	this->name = name;
}
string Person::getName() {
	return this->name;
}

void Person::setTelNo(string telNo) {
	this->telNo = telNo;
}
string Person::getTelNo() {
	return this->telNo;
}