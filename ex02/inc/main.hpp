/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 23:29:38 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/17 23:30:08 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
	#define MAIN_HPP

	#ifndef DEBUG
		#define DEBUG 0
	#endif

	#include <iostream>
	#include "Base.hpp"
	#include "A.hpp"
	#include "B.hpp"
	#include "C.hpp"

	void	printRedLine(std::string str);
	void	printBlueLine(std::string str);

	Base*	generate(void);
	void	identify(Base* p);
	void	identify(Base& p);

	void	test1(void);

#endif // MAIN_HPP
