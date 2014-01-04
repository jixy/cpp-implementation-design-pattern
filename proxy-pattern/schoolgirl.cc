#include "schoolgirl.h"

SchoolGirl::SchoolGirl(std::string str)
{
	name = str;
}
void
SchoolGirl::SetName (std::string m_name)
{
	name = m_name;
}

std::string
SchoolGirl::GetName() const
{
	return name;
}
