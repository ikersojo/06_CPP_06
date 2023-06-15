#include "../inc/main.hpp"

void	printBlueLine(const std::string& str)
{
	std::cout << "\033[0;94m" << str << "\033[0;39m" << std::endl;
}

void	printRedLine(const std::string& str)
{
	std::cout << "\033[0;31m" << str << "\033[0;39m" << std::endl;
}
