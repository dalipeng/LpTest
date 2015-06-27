/*
 * Handle.h
 *
 *  Created on: 2015Äê3ÔÂ3ÈÕ
 *      Author: lipeng
 */

#ifndef HANDLE_H_
#define HANDLE_H_
#import <iostream>


template<class T1>
class Handle {

public:
	Handle(T1* t) : ptr(t), counter(new std::size_t(1)) {}
	Handle(const Handle<T1>& ori) : ptr(ori.ptr), counter(ori.counter){
		++*counter;
	}
	~Handle() {
		mem_free();
	}
	Handle& operator =(T1 ori) {
		++*ori.counter;
		mem_free();
		ptr = ori.ptr;
		counter++;
	}

	void mem_free() {
		if(0 == --*counter) {
			delete ptr, counter;
			ptr = 0, counter = 0;
		}
	}

	T1& operator *() {
		return *ptr;
	}

	T1* operator ->() {
		return ptr;
	}

	void display() {
		std::cout<<"hehehe:"<<*counter;
	}

private:
	std::size_t* counter;
	T1* ptr;
};

#endif /* HANDLE_H_ */
