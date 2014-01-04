#ifndef _SCHOOLGIRL_HEAD
#define _SCHOOLGIRL_HEAD
#include <iostream>
#include <string>
class SchoolGirl
{
	public:
			SchoolGirl (std::string str);
			void SetName(std::string name);
			std::string	 GetName() const;
	private:
			std::string name;
};
#endif
