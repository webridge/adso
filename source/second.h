#ifndef SECOND_H
#define SECOND_H

#include "adsotime.h"
#include "text.h"

class Second: public Time {

	public:
		Second(Text *t, Text *a, Text *b);
		Second(Text *t);
		~Second();

};




#endif

