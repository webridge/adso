#ifndef BU01_H
#define BU01_H

#include "special.h"

class Bu01: public Special {

	public:
		Bu01(Text *t);
		~Bu01();

		int adjust_confidence(Text *t, int a, int b, int c);


};



#endif


