#pragma once
#include<iostream>
using namespace std;

class Person {

	public:
		Person();
		Person(string, string);	

		void setName(string);
		string getName();

		void setTelNo(string);
		string getTelNo();

	private:
		string name;
		string telNo;

};