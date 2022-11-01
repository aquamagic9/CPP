#include "../incs/Contact.hpp"

void    Contact::setFirstName(std::string str)
{
    _firstName = str;
}

void    Contact::setLastName(std::string str)
{
	_lastName = str;
}

void    Contact::setNickName(std::string str)
{
	_nickName = str;
}

void    Contact::setPhoneNumber(std::string str)
{
	_phoneNumber = str;
}

void    Contact::setDarketSecret(std::string str)
{
	_darkestSecret = str;
}

std::string	Contact::getFirstName(void)
{
	return (_firstName);
}

std::string	Contact::getLastName(void)
{
	return (_lastName);
}

std::string	Contact::getNickName(void)
{
	return (_nickName);
}

std::string	Contact::getPhoneNumber(void)
{
	return (_phoneNumber);
}

std::string	Contact::getDarketSecret(void)
{
	return (_darkestSecret);
}

void Contact::print()
{
	std::string firstName(_firstName);
	std::string lastName(_lastName);
	std::string nickName(_nickName);

	if (_firstName.length() > 10)
		firstName = _firstName.substr(0, 9) + ".";
	if (_lastName.length() > 10)
		lastName = _lastName.substr(0, 9) + ".";	
	if (_nickName.length() > 10)
		nickName = _nickName.substr(0, 9) + ".";
		
	std::cout << std::setw(10) << firstName	 << "|"
			  << std::setw(10) << lastName		 << "|"
			  << std::setw(10) << nickName		 << std::endl;

}

void Contact::printAll()
{
	std::cout << "FristName: " 	 << _firstName	 	 << std::endl;
	std::cout << "LastName: " 	 << _lastName		 << std::endl;
	std::cout << "NickName: " 	 << _nickName		 << std::endl;
	std::cout << "PhoneNumber: " << _phoneNumber		 << std::endl;
	std::cout << "Secret: " 	 << _darkestSecret 	 << std::endl;
}