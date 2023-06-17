/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 23:36:25 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/17 22:40:53 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

/* ************************************************************************* */

Serializer::Serializer(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << "Default Serializer Constructor called"
					<< "\033[0;39m" << std::endl;
}

Serializer::Serializer(const Serializer& obj)
{
	*this = obj;
}

Serializer::~Serializer(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;93m" << "Default Serializer Destructor called"
					<< "\033[0;39m" << std::endl;
}

Serializer&	Serializer::operator=(const Serializer& rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}

// Getters
/* ************************************************************************* */



// Setter
/* ************************************************************************* */



// Static Class Functions
/* ************************************************************************* */

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t number;

	number = reinterpret_cast<uintptr_t>(ptr);
	return (number);
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	Data*		ptr_data;

	ptr_data = reinterpret_cast<Data*>(raw);
	return (ptr_data);
}
