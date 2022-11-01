#include "../incs/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_size = 0;
}
void	PhoneBook::add(void)
{
	Contact newContact;
	std::string inputStr;

	std::cout << "Write First Name: ";
	std::getline(std::cin, inputStr);
	newContact.setFirstName(inputStr);

	std::cout << "Write Last Name: ";
	std::getline(std::cin, inputStr);
	newContact.setLastName(inputStr);

	std::cout << "Write Nick Name: ";
	std::getline(std::cin, inputStr);
	newContact.setNickName(inputStr);

	std::cout << "Write Phone Number: ";
	std::getline(std::cin, inputStr);
	newContact.setPhoneNumber(inputStr);

	std::cout << "Write Darkest Secret: ";
	std::getline(std::cin, inputStr);
	newContact.setDarketSecret(inputStr);

	_contacts[_size % 8] = newContact;
	_size = _size + 1;
}

void	PhoneBook::search(void)
{
	int size;

	if (_size > 8)
		size = 8;
	else
		size = _size;

	std::cout << std::setw(10) << "index" 	  << "|"
				  << std::setw(10) << "firstname" << "|"
				  << std::setw(10) << "last name" << "|"
				  << std::setw(10) << "nickname"  << std::endl;
	
	for (int i = 0; i < size; i++)
	{
		std::cout << std::setw(10) << i << "|";
		_contacts[i].print();
	}
	std::cout << "Input Index: ";
	std::string inputIndex;
	std::getline(std::cin, inputIndex);
	if (std::cin.eof())
	{
		std::cout << "Input Correctly!" << std::endl;
		return ;
	}
	if (inputIndex.size() != 1 || !std::isdigit(inputIndex[0]))
	{
		std::cout << "Wrong Index!" << std::endl;
		return ;
	}
	std::stringstream ss1(inputIndex);
	int index;
	ss1 >> index;
	if (index >= 0 && index <= size - 1)
		_contacts[index].printAll();
	else
		std::cout << "Wrong Index!" << std::endl;

}

