#include "contact.h"
#include <vector>

class MobilePhone
{
public:
	MobilePhone();

	void add(const std::string& name, const std::string& number);
	void call(const std::string& contact) const;
	void sms(const std::string& contact) const;
private:
	std::vector<Contact> m_lContacts;
};