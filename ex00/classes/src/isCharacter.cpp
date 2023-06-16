/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isCharacter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 23:36:18 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/16 23:36:18 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

bool	isCharacter(const std::string& str)
{
	if (str.length() == 1 && !isdigit(str[0]) && str[0] >= 32 && str[0] <= 126)
		return (true);
	return (false);
}
