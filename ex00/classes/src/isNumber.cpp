/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isNumber.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 23:36:21 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/16 23:36:22 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

bool isAnyNumber(const std::string& str)
{
	bool	hasDecimalPoint = false;
	bool	hasExponent = false;
	int		i = -1;
	int		len;

	if (str.empty())
		return (false);
	len = str.length();
	if (str[len - 1] == 'f')
		len -= 1;
	while (++i < len)
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			continue;
		if (isdigit(str[i]))
			continue;
		if (str[i] == '.')
		{
			if (hasDecimalPoint || hasExponent)
				return (false);
			hasDecimalPoint = true;
			continue;
		}
		if (str[i] == 'e' || str[i] == 'E')
		{
			if (hasExponent)
				return (false);
			hasExponent = true;
			if (i + 1 < len && (str[i + 1] == '+' || str[i + 1] == '-'))
				i++;
			continue;
		}
		return (false);
	}
	return (true);
}

bool	isInteger(const std::string& str)
{
	bool	hasDigits = false;
	int		i = -1;
	int		len;

	if (str.empty())
		return (false);
	len = str.length();
	while (++i < len)
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			continue;
		if (isdigit(str[i]))
		{
			hasDigits = true;
			continue;
		}
		return (false);
	}
	if (!hasDigits)
		return (false);
	try
	{
		int value = std::stoi(str);

		if ((value >= std::numeric_limits<int>::min()) && (value <= std::numeric_limits<int>::max()))
			return (true);
		return (false);
	}
	catch (const std::out_of_range&)
	{
		return (false);
	}
	catch (const std::exception&)
	{
		return (false);
	}
}

bool	isFloat(const std::string& str)
{
	try
	{
		double value = std::stod(str);

		if (value >= std::numeric_limits<float>::lowest() && value <= std::numeric_limits<float>::max())
			return true;
	}
	catch (const std::exception&)
	{
		return (false);
	}
	return (false);
}

bool	isPseudo(const std::string& str)
{
	if (str == "inf" || str == "-inf" || str == "+inf" || str == "nan"
		|| str == "inff" || str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	return (false);
}
