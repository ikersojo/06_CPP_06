/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 23:36:12 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/16 23:36:18 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
	#define SCALARCONVERTER_HPP

	#ifndef DEBUG
		#define DEBUG 0
	#endif

	#include <string>
	#include <iostream>
	#include <iomanip>
	#include <limits>

	bool	isCharacter(const std::string& str);
	bool	isAnyNumber(const std::string& str);
	bool	isInteger(const std::string& str);
	bool	isFloat(const std::string& str);
	bool	isPseudo(const std::string& str);

	class ScalarConverter
	{
		public:
			ScalarConverter(void);
			ScalarConverter(const ScalarConverter& obj);
			~ScalarConverter(void);
			ScalarConverter&	operator=(const ScalarConverter& rhs);

			static void		convert(const std::string& str);

		private:
			static char		_c;
			static int		_i;
			static float	_f;
			static double	_d;

			static char		getChar(void);
			static int		getInt(void);
			static float	getFloat(void);
			static double	getDouble(void);

			static int		detectType(const std::string& str);
			static void		setAttributes(const int type, const std::string& str);
			static void		print(void);
			static void		printPseudo(const std::string& str);
			static void		printError(void);
	};

#endif // SCALARCONVERTER_HPP
