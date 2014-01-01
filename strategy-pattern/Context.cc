#include "Context.h"
Context::Context(enum RS rs)
{
	switch (rs)
	{
		case LRU:
				m_rs = new Lru();
				break;
		case FIFO:
				m_rs = new Fifo();
				break;
		case RANDOM:
				m_rs = new Random();
				break;
		default:
				m_rs = NULL;
	}
}

Context::~Context()
{
		delete m_rs;
}

void
Context::Replace()
{
	m_rs->replace();
}
