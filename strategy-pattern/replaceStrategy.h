#ifndef _REPLACESTRATEGY_HEAD
#define _REPLACESTRATEGY_HEAD
#include <iostream>
class ReplaceStrategy
{
		public:
				virtual	void replace() = 0;
				virtual ~ReplaceStrategy () {}
};
#endif
