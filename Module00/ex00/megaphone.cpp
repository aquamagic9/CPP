#include <iostream>

int main(int argc, char **argv) {
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string upper_str(argv[i]);
			for (int j = 0; j < (int)upper_str.length(); j++)
			{
				if (std::islower(upper_str[j]))
				{
					upper_str[j] = std::toupper(upper_str[j]);
				}
			}
			std::cout << upper_str;
		}
		std::cout << std::endl;
	}
  return 0;
}