#ifndef _PURSUIT_HEAD
#define _PURSUIT_HEAD
#include "IGiveGift.h"
#include "schoolgirl.h"
class Pursuit : public IGiveGift
{
	public:
			Pursuit (SchoolGirl *  mm);
			void GiveDolls();
			void GiveFlowers();
			void GiveChocolate();
	private:
			SchoolGirl * mm;
};
#endif
