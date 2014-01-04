#ifndef _PROXY_HEAD
#define _PROXY_HEAD
#include "schoolgirl.h"
#include "IGiveGift.h"
#include "Pursuit.h"
class Proxy : public IGiveGift
{
	public:
			Proxy (SchoolGirl * mm);
			void GiveDolls ();
			void GiveFlowers ();
			void GiveChocolate ();
			~ Proxy(); 
	private:
			Pursuit *  gg;
};
#endif
