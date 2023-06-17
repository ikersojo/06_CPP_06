/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:45:44 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/17 23:49:02 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

void	test1(void)
{
	Base*	ptr;

	printBlueLine("ptr = generate();");
	ptr = generate();

	printBlueLine("identify(ptr);");
	identify(ptr);

	Base&	ref = *ptr;
	printBlueLine("identify(ref);");
	identify(ref);

	delete ptr;
}
