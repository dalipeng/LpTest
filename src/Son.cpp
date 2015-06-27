/*
 * Son.cpp
 *
 *  Created on: 2015Äê2ÔÂ22ÈÕ
 *      Author: lipeng
 */

#include "Son.h"

extern int MYSAME = 250;

Son::Son() {
	// TODO Auto-generated constructor stub
	//cout<<"son::construct \n";
	//Fuc();
	cout<<"contrucht";
}

Son::Son(const Son& ori) {
	cout<<"hao sang kuang a";
}

Son::~Son() {
	// TODO Auto-generated destructor stub
	std::cout<<"~Son";
}

void Son::display() {
	cout<<"i am son::display";
}
