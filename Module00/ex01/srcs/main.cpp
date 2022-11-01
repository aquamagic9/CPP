#include "../incs/PhoneBook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook myPhoneBook;

	while (1)
	{
		std::cout << "Write Command: ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
		{
			myPhoneBook.add();
		}
		else if (cmd == "SEARCH")
		{
			myPhoneBook.search();
		}
		else
			std::cout << "Wrong command!" << std::endl;
	}
}