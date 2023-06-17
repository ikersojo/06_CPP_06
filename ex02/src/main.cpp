/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 23:36:36 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/17 23:51:18 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

void	printBlueLine(std::string str)
{
	std::cout  << std::endl << "\033[0;94m" << str
				<< "\033[0;39m" << std::endl;
}

void	printRedLine(std::string str)
{
	std::cout  << std::endl << "\033[0;31m" << str
				<< "\033[0;39m" << std::endl;
}

int main(void)
{
	int i = -1;
	while (++i < 10)
	{
		printRedLine("------------- TEST 1: Serialize/Deserialize ------------- ");
		test1();
	}
	return (0);
}
