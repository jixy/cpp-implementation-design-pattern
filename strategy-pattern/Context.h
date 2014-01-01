#ifndef _CONTEXT_HEAD
#define _CONTEXT_HEAD
#include "replaceStrategy.h"
#include "LruStrategy.h"
#include "FifoStrategy.h"
#include "RandomStrategy.h"
enum RS {LRU, FIFO, RANDOM};
class Context
{
	public:
			Context(enum RS rs);
			~Context();
			void Replace();
	private:
		    ReplaceStrategy *	m_rs;
};
#endif
