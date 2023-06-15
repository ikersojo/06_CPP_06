#include "../inc/main.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
		printRedLine("Syntax Error: ./bin/convert XX");
	return (0);
}
