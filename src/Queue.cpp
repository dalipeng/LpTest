/*
 * Queue.cpp
 *
 *  Created on: 2015��1��16��
 *      Author: lipeng
 */

#include "Queue.h"
extern const int lp = 5000;
Queue::Queue():QSize(5),queueList(new Item[QSize]){

}

Queue::~Queue() {
	//delete[] this->queueList;
}

bool Queue::isFull() {

}
