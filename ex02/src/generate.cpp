/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 23:20:32 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/17 23:53:36 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

static int randomChoiceGen(int choices)
{
	static bool isInitialized = false;

	if (!isInitialized)
	{
		srand((unsigned)time(NULL));
		isInitialized = true;
	}
	return rand() % choices;
}

Base*	generate(void)
{
	Base*	ptr;

	switch (randomChoiceGen(3))
	{
		case 0:
			if (DEBUG == 1)
				std::cout << "\033[0;93m" << "Random class is A" << "\033[0;39m" << std::endl;
			ptr = new A();
			break;
		case 1:
			if (DEBUG == 1)
				std::cout << "\033[0;93m" << "Random class is B" << "\033[0;39m" << std::endl;
			ptr = new B();
			break;
		case 2:
			if (DEBUG == 1)
				std::cout << "\033[0;93m" << "Random class is C" << "\033[0;39m" << std::endl;
			ptr = new C();
			break;
		default:
			if (DEBUG == 1)
				std::cout << "\033[0;93m" << "Error on random function" << "\033[0;39m" << std::endl;
			ptr = NULL;
			break;
	}
	return (ptr);
}
