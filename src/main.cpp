#include <iostream>
#include "mobilephone.h"

int main() {
	std::cout << "\tTASK 26.2 MOBILE PHONE\n";

	MobilePhone phone;

	std::string action;
	do
	{
		std::cout << "\nEnter \"add\" to add new contact to phone\n";
		std::cout << "Enter \"call\" to make a call\n";
		std::cout << "Enter \"sms\" to send a sms\n";
		std::cout << "Enter \"exit\" to exit programm\n";

		action = myCin<decltype(action)>();

		if (action == "add")
		{
			std::string number;
			std::cout << "Enter a number (+7 XXX XXX XX XX)\n";
			number = myCin<decltype(number)>();

			if (isCorrectNumber(number))
			{
				std::string name;
				std::cout << "Enter a name\n";

				name = myCin<decltype(name)>();

				if (name.empty())
				{
					std::cout << "Name can't be empty\n";
				}
				else
				{
					phone.add(name, number);
				}
			}

		}
		else if (action == "call")
		{
			std::string contact = getContact();

			if (contact.empty())
			{
				std::cout << "Contact can't be empty\n";
			}
			else
			{
				phone.call(contact);
			}
		}
		else if (action == "sms")
		{
			std::string contact = getContact();

			if (contact.empty())
			{
				std::cout << "Contact can't be empty\n";
			}
			else
			{
				phone.sms(contact);
			}
		}
		else if (action == "exit")
		{
			break;
		}
		else
		{
			std::cout << "You entered somethig wrong. Try again\n";
		}

	} while (true);


	return 0;
}