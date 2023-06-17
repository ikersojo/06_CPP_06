/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:45:42 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/17 22:50:26 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

void	test2(void)
{
	Data		data;
	Data*		ptr_data;
	uintptr_t	number;

	data.name = "iker";
	data.id = 42;
	std::cout << "data structure (name:" << data.name << ", id: "
				<< data.id << ")" << std::endl;
	number = Serializer::serialize(&data);
	std::cout << "number = " << number << std::endl;

	data.name = "name has been deleted";

	ptr_data = Serializer::deserialize(number);
	std::cout << "data structure (name:" << ptr_data->name << ", id: "
				<< ptr_data->id << ")" << std::endl;
}
