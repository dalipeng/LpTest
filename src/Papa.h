#ifndef PAPA_H_
#define PAPA_H_
#include <string>
#include <iostream>
using namespace std;

class Papa {
private:
	string someimp="Passwordfound";

public:
	int age;
	int* imp;
	Papa();
	Papa(const Papa&);
	Papa(int);
	virtual ~Papa() {
		cout<<"~Papa \n";
		delete imp;
	}

	string operator +(Papa p);

	operator double() {
		return 3.14;
	}
	virtual void display();
	const int& getAge();
};



#endif
