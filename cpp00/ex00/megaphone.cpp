#include <iostream>

int	main(int argc, char **argv)
{
	std::string	full_string = "";
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc ; i++)
		full_string += argv[i];
	for (int i = 0; i < (int)full_string.length() ; i++)
		full_string[i] = toupper(full_string[i]);
	std::cout << full_string << std::endl;
}