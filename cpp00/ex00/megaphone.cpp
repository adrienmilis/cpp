#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		std::cout << "Zero or one argument required" << std::endl;
		return (0);
	}
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 0; i < (int)strlen(argv[1]) ; i++)
		argv[1][i] = toupper(argv[1][i]);
	std::cout << argv[1] << std::endl;
}