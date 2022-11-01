# ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[8];
	int _size;
public:
	PhoneBook();
	void add();
	void search();
};

# endif