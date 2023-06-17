/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 23:36:36 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/17 22:44:52 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

static void	printRedLine(const std::string& str)
{
	std::cout << "\033[0;31m" << str << "\033[0;39m" << std::endl;
}

int main(void)
{
	printRedLine("------------- TEST 1: Serialize/Deserialize ------------- ");
	test1();
	printRedLine("------------------ END OF TEST 1 -------------------------");
	printRedLine("---------------- TEST 2: modified struct ---------------- ");
	test2();
	printRedLine("------------------ END OF TEST 2 -------------------------");
	return (0);
}
