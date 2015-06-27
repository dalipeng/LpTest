/*
 * MyList.cpp
 *
 *  Created on: 2015Äê2ÔÂ28ÈÕ
 *      Author: lipeng
 */
#ifndef MYLIST_CPP
#define MYLIST_CPP

#include "MyList.h"
#include <iostream>

using namespace std;

template<class T1>
MyList<T1>::MyList():head(0),end(0) {

}

template<class T1>
MyList<T1>::~MyList() {
	this->doGC();
}

template<class T1>
void MyList<T1>::doGC() {
	while(head != 0) {
		MyItem<T1>* item = head;
		head = head->Next;
		delete item;
		cout<<"1 time\n";
	}
}


template<class T1>
MyItem<T1>& MyList<T1>::Push(T1 elem) {
	MyItem<T1>* item = new MyItem<T1>(elem);
	if(empty()) {
		this->head = item;
		this->end = item;
	}else {
		end->Next = item;
		this->end = item;
	}

}

template<class T1>
void MyList<T1>::display() {
	MyItem<T1>* curr = head;
	while(curr) {
		std::cout<<curr->Data<<"\n";
		curr = curr->Next;
	}
}

template<class T1> template<typename P1,typename P2>
void MyList<T1>::assign(P1 it1, P2 it2) {
	std::size_t ss = 2;
	while(it1 != it2) {
		this->Push(*it1);
		it1++;
	}
}

#endif
