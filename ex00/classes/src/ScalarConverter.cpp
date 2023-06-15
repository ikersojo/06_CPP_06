#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << "Default ScalarConverter Constructor called"
					<< "\033[0;39m" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
	*this = obj;
}

ScalarConverter::~ScalarConverter(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << "Default ScalarConverter Destructor called"
					<< "\033[0;39m" << std::endl;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& rhs)
{
	if (this != &rhs)
	{
		this->_input = rhs.getInput();
	}
	return (*this);
}

const std::string&	ScalarConverter::getInput(void) const
{
	return (this->_input);
}

void	printChar(const char c)
{
	if (c <= 126 && c >= 20)
		std::cout << "char:   " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char:   " << "Non Displayable" << std::endl;
	std::cout << "int:    " << static_cast<int>(c) << std::endl;
	std::cout << "float:  " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

/*
It returns the type of the string:
-1 : error
 0 : char
 1 : int
 2 : float
 3 : double
*/
int	detectType(const std::string& str)
{
	if (str.length() == 0)
		return (-1);
	if (str.length() == 1) // needs more checks
		return (0);
	// check int
	// check float
	// check double
	return (-1);
}

void	ScalarConverter::convert(const std::string& str)
{
	char	c;
	// int		i;
	// float	f;
	// double	d;
	int		option;

	option = detectType(str);

	switch (option)
	{
	case -1:
		std::cout << "\033[0;31m" << "The provided input is not a literal" << "\033[0;39m" << std::endl;
		break;
	case 0:
		c = static_cast<char>(str[0]);
		printChar(c);
		break;

	default:
		break;
	}
}

