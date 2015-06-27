/*
 * MyList.h
 *
 *  Created on: 2015Äê2ÔÂ28ÈÕ
 *      Author: lipeng
 */

#ifndef MYLIST_H_
#define MYLIST_H_
#include <iostream>

template<class T1>class MyList;

template<class T1>
class MyItem {
	T1 Data;
	MyItem* Next;
public:
	friend class MyList<T1>;
	MyItem(T1& tValue):Data(tValue),Next(0) {

	}
};

template<class T1>
class MyList {
MyItem<T1>* head, *end;
public:
	MyList();
	virtual ~MyList();

	bool empty() {
		if((0 == head)&&(0 == end)) {
			return true;
		}
		return false;
	}

	MyItem<T1>& Push(T1);
	void display();

	template<typename P1,typename P2>void assign(P1, P2);
private:
	void doGC();

};

#include "MyList.cpp"
#endif /* MYLIST_H_ */
