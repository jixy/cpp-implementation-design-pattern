#include "Pursuit.h"

Pursuit::Pursuit(SchoolGirl  * girl)
{
	mm = girl;
}
void
Pursuit::GiveDolls()
{
	std::cout << mm->GetName() << " ,  give you Dolls " << std::endl;
}
void
Pursuit::GiveFlowers()
{
	std::cout << mm->GetName() << " ,  give you Flowers " << std::endl;
}
void
Pursuit::GiveChocolate()
{
	std::cout << mm->GetName() << " ,  give you Chocolates " << std::endl;
}
