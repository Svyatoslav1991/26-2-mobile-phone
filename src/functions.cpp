#include "..\include\functions.h"

bool isCorrectNumber(const std::string number) noexcept
{
	if (number.size() != 12)
	{
		std::cout << "Wrong nuber size\n";
		return false;
	}

	if (number[0] != '+' || number[1] != '7')
	{
		std::cout << "Phone number must start with \"+7\"\n";
		return false;
	}

	return true;
}

//*********************************************************************

std::string getContact() noexcept
{
	std::string contact;
	std::cout << "Enter the contact (name or number) you want to call\n";
	contact = myCin<decltype(contact)>();

	return contact;
}
