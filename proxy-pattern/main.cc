#include "schoolgirl.h"
#include "Proxy.h"
#include "Pursuit.h"

int main()
{
	SchoolGirl * girl = new SchoolGirl ("jiaojiao");
	Proxy *  pro = new Proxy ( girl);

	pro->GiveDolls();
	pro->GiveFlowers();
	pro->GiveChocolate();

	delete girl;
	delete pro;
}
