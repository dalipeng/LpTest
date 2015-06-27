/*
 * Son.h
 *
 *  Created on: 2015Äê2ÔÂ22ÈÕ
 *      Author: lipeng
 */

#ifndef SON_H_
#define SON_H_

#include "Papa.h"


class Son: public Papa {
public:
	Son();
	Son(const Son&);
	virtual ~Son();
	Son& operator =(Son& ori) {
		cout<<"wo shi ===";
	}

	operator int() {
		return 255;
	}
	void display();

};

#endif /* SON_H_ */
