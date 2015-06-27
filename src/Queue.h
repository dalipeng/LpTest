/*
 * Queue.h
 *
 *  Created on: 2015Äê1ÔÂ16ÈÕ
 *      Author: lipeng
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include <iostream>

class Queue {
	struct Item {
		Item* nextP;
		int value;
		Item() {this->value = 2;std::cout<<"am2";}
	};
	const int QSize;
	Item* queueList;


public:
	Queue();
	virtual ~Queue();
	bool isFull();
	bool enqueue();
	bool dequeue();
};

#endif /* QUEUE_H_ */
