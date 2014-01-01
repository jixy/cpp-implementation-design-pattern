#ifndef _FIFOSTRATEGY_HEAD
#define _FIFOSTRATEGY_HEAD
#include "replaceStrategy.h"
class Fifo : public ReplaceStrategy
{
	public:
			virtual void replace();
};
#endif
