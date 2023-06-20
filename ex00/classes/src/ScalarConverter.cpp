/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 23:36:25 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/20 16:09:07 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

/* ************************************************************************* */

char	ScalarConverter::_c = 0;
int		ScalarConverter::_i = 0;
float	ScalarConverter::_f = 0.0f;
double	ScalarConverter::_d = 0.0;

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
		return (*this);
	return (*this);
}

// Getters
/* ************************************************************************* */

char	ScalarConverter::getChar(void)
{
	return (ScalarConverter::_c);
}

int	ScalarConverter::getInt(void)
{
	return (ScalarConverter::_i);
}

float	ScalarConverter::getFloat(void)
{
	return (ScalarConverter::_f);
}

double	ScalarConverter::getDouble(void)
{
	return (ScalarConverter::_d);
}

// Setter
/* ************************************************************************* */

void	ScalarConverter::setAttributes(const int type, const std::string& str)
{
	char	c = 0;
	int		i = 0;
	float	f = 0;
	double	d = 0;

	switch (type)
	{
		case -1: // input error
			std::cout << "error" << std::endl;
			break;
		case 0: // input is char
			c = str[0];;
			ScalarConverter::_c = c;
			ScalarConverter::_i = static_cast<int>(c);
			ScalarConverter::_f = static_cast<float>(c);
			ScalarConverter::_d = static_cast<double>(c);
			break;
		case 1: // input is int
			i = std::atoi(str.c_str());
			ScalarConverter::_c = static_cast<char>(i);
			ScalarConverter::_i = i;
			ScalarConverter::_f = static_cast<float>(i);
			ScalarConverter::_d = static_cast<double>(i);
			break;
		case 2: // input is float
			f = std::atof(str.c_str());
			ScalarConverter::_c = static_cast<char>(f);
			ScalarConverter::_i = static_cast<int>(f);
			ScalarConverter::_f = f;
			ScalarConverter::_d = static_cast<double>(f);
			break;
		case 3: // input is double
			d = std::strtod(str.c_str(), NULL);
			ScalarConverter::_c = static_cast<char>(d);
			ScalarConverter::_i = static_cast<int>(d);
			ScalarConverter::_f = static_cast<float>(d);
			ScalarConverter::_d = d;
			break;
		default:
			break;
	}
}

// Print Results
/* ************************************************************************* */

void	ScalarConverter::print(void)
{
	if (_d <= 126 && _d >= 32)
		std::cout << "char:   '" << static_cast<char>(ScalarConverter::_c) << "'"<< std::endl;
	else if (_d <= 127 && _d >= -128)
		std::cout << "char:   " << "Non Displayable" << std::endl;
	else
		std::cout << "char:   " << "impossible" << std::endl;

	if ((_d >= std::numeric_limits<int>::min()) && (_d <= std::numeric_limits<int>::max()))
		std::cout << "int:    " << ScalarConverter::_i << std::endl;
	else
		std::cout << "int:    " << "impossible" << std::endl;

	std::cout << "float:  " << std::fixed << std::setprecision(1) << ScalarConverter::_f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << ScalarConverter::_d << std::endl;
}

void	ScalarConverter::printError(void)
{
	std::cout << "char:   " << "Impossible" << std::endl;
	std::cout << "int:    " << "Impossible" << std::endl;
	std::cout << "float:  " << "Impossible" << std::endl;
	std::cout << "double: " << "Impossible" << std::endl;
}

void	ScalarConverter::printPseudo(const std::string& str)
{
	std::string	strOut;

	if (str == "inff")
		strOut = "inf";
	else if (str == "-inff")
		strOut = "-inf";
	else if (str == "+inff")
		strOut = "+inf";
	else if (str == "nanf")
		strOut = "nan";
	else
		strOut = str;
	std::cout << "char:   " << "Impossible" << std::endl;
	std::cout << "int:    " << "Impossible" << std::endl;
	std::cout << "float:  " << strOut << "f" << std::endl;
	std::cout << "double: " << strOut << std::endl;
}

// convert string static function
/* ************************************************************************* */

/*
It returns the type of the string:
-1 : error | 0 : char | 1 : int | 2 : float | 3 : double | 4 : pseudo
*/
int	ScalarConverter::detectType(const std::string& str)
{
	if (isPseudo(str))
		return (4);
	if (isCharacter(str))
		return (0);
	if (isInteger(str))
		return (1);
	if (isAnyNumber(str))
	{
		if (isFloat(str))
			return (2);
		return (3);
	}
	return (-1);
}

void	ScalarConverter::convert(const std::string& str)
{
	int	currentType;

	currentType = detectType(str);
	if (currentType == 4)
		printPseudo(str);
	else if (currentType != -1)
	{
		setAttributes(currentType, str);
		print();
	}
	else
		printError();
}
