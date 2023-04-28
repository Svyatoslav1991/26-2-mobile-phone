#pragma once
#include "functions.h"

class Contact
{
public:
	Contact(std::string number, std::string name);

	std::string getNumber() const;
	std::string getName() const;

private:
	std::string m_number;
	std::string m_name;
};