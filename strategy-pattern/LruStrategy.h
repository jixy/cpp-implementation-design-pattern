#ifndef _LRUSTRATEGY_HEAD
#define _LRUSTRATEGY_HEAD
#include "replaceStrategy.h"
class Lru : public ReplaceStrategy
{
	public:
			virtual	void replace ();
};
#endif
