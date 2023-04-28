#include "..\include\mobilephone.h"
#include <iostream>
#include <string>

MobilePhone::MobilePhone()
{
}

//*******************************************************************************************

void MobilePhone::add(const std::string& name, const std::string& number)
{
	for (const auto& contact : m_lContacts)
	{
		if (contact.getName() == name)
		{
			std::cout << "This name already exists, the contact is not added\n";
			return;
		}

		if (contact.getNumber() == number)
		{
			std::cout << "This number already exists, the contact is not added\n";
			return;
		}
	}

	m_lContacts.push_back(Contact(number, name));
	std::cout << "Comtact " << name << " : " << number << " is added\n";
}

//*******************************************************************************************

void MobilePhone::call(const std::string& contact) const
{
	for (const auto& it : m_lContacts)
	{
		if (it.getName() == contact || it.getNumber() == contact)
		{
			std::cout << "CALL " << it.getNumber() << "\n";
			return;
		}
	}

	std::cout << "There is no such contact in the phone\n";
}

//*******************************************************************************************

void MobilePhone::sms(const std::string& contact) const
{
	std::string name;

	for (const auto& it : m_lContacts)
	{
		if (it.getName() == contact || it.getNumber() == contact)
		{
			name = it.getName();
			break;
		}
	}

	if (name.empty())
	{
		std::cout << "There is no such contact in the phone\n";
	}
	else
	{
		std::string sms;
		std::cout << "Enter sms: ";
		std::getline(std::cin, sms);

		std::cout << "You sent " << name << " a message:\n";
		std::cout << sms << "\n";
	}
}






