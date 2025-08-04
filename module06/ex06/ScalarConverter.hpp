/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:22:23 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/04 19:45:50 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <limits>
#include <cerrno>
#include <cfloat>
#include <cstdlib>


#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
	
class ScalarConverter {
	public:
		static void convert(const std::string& str);
	
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);

		static bool isChar(const std::string& str);
		static bool isInt(const std::string& str);
		// static bool isFloat(const std::string& str);
		// static bool isDouble(const std::string& str);

		static void convertChar(const std::string& str);
		static void convertInt(const std::string& str);
};

#endif