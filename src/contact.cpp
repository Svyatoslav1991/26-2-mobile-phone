#include "..\include\contact.h"
#include "contact.h"

Contact::Contact(std::string number, std::string name) : m_number(number), m_name(name)
{
	
}

//*******************************************************************************************

std::string Contact::getNumber() const
{
	return m_number;
}

//*******************************************************************************************

std::string Contact::getName() const
{
	return m_name;
}
