#include "Proxy.h"

Proxy::Proxy(SchoolGirl  * mm)
{
		gg = new Pursuit(mm);	
}

Proxy::~Proxy()
{
	delete gg;
}
void
Proxy::GiveDolls()
{
	gg->GiveDolls();
}

void
Proxy::GiveFlowers()
{

	gg->GiveFlowers();
}

void
Proxy::GiveChocolate ()
{
	gg->GiveChocolate ();
}
