
#include <iostream>
#include <string>
#include "Papa.h"

using namespace std;

Papa::Papa() {
	//cout<<"i am Papa constructor!!\n";
	imp = new int(114);
}

Papa::Papa(const Papa& p) {
	cout<<"this is a copy construct of Papa \n";
}
Papa::Papa(int a) {
	cout<<"constructor with int \n";
	this->age = a;
}

void Papa::display() {
	cout<<"I am Papa::display \n";
}

const int& Papa::getAge() {
	return this->age;
}

string Papa::operator +(Papa s) {
	return "abcd";
}

