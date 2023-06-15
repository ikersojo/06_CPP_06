#ifndef SCALARCONVERTER_HPP
	#define SCALARCONVERTER_HPP

	#ifndef DEBUG
		#define DEBUG 0
	#endif

	#include <string>
	#include <iostream>
	#include <iomanip>

	class ScalarConverter
	{
		public:
			ScalarConverter(void);
			ScalarConverter(const ScalarConverter& obj);
			~ScalarConverter(void);

			ScalarConverter&	operator=(const ScalarConverter& rhs);

			const std::string&	getInput(void) const;

			static void	convert(const std::string& str);

		private:
			std::string	_input;

			//void	print(void) const;
	};

#endif // SCALARCONVERTER_HPP
