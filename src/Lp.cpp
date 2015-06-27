//============================================================================
// Name        : Lp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include "Queue.h"
#include <typeinfo>
#include <vector>
#include <exception>
#include <fstream>
#include "Papa.h"
#include "Son.h"
#include "MyList.h"
#include "Handle.h"

using namespace std;


class A {
public:
	string name = "great one";
protected:
	int age = 110;
private:
	string password = "kidding2222";
public:
	string getPassword() {
		return password;
	}
};
//=====================================================
class B : public A {
public:
	B() {
		std::cout<<age;
	}
};
//=====================================================
class C : public B {
public:
	C() {
		cout<<age;
	}
};

void cs(string& s) {
	cout<<s;

}

int main() {
	C cc;
	cc.name = "lipeng";
	cout<< cc.name;
}
