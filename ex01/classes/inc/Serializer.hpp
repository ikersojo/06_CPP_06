/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 23:36:12 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/17 22:26:34 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
	#define SERIALIZER_HPP

	#ifndef DEBUG
		#define DEBUG 0
	#endif

	#include <string>
	#include <iostream>

	struct Data
	{
		int			id;
		std::string	name;	
	};

	class Serializer
	{
		public:
			~Serializer(void);

			static uintptr_t	serialize(Data* ptr);
			static Data*		deserialize(uintptr_t raw);

		private:
			Serializer(void);
			Serializer(const Serializer& obj);
			Serializer&	operator=(const Serializer& rhs);
	};

#endif // SERIALIZER_HPP
