/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:22:27 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/04 20:03:39 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; }

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return (*this);
}
// ============================================================================

// ============================== CONVERT METHODS =============================
void ScalarConverter::convert(const std::string& str) {
	std::cout << std::fixed << std::setprecision(1);
	if (isChar(str))
		convertChar(str);
	if (isInt(str))
		convertInt(str);
		// std::cout << GREEN "int: " RESET << RED "impossible" RESET << std::endl;
	// if (!isFloat(str))
	// 	std::cout << GREEN "float: " RESET << RED "impossible" RESET << std::endl;
	// if (!isDouble(str))
	// 	std::cout << GREEN "char: " RESET << RED "impossible" RESET << std::endl;
}

void ScalarConverter::convertChar(const std::string& str) {
	if (str[0] > 31 && str[0] < 127)
	{
		std::cout << GREEN "char:\t" << "'" + str + "'"  RESET << std::endl;
		std::cout << GREEN "int:\t" << static_cast<int>(str[0]) << RESET << std::endl;
		std::cout << GREEN "float:\t" << static_cast<float>(str[0]) << "f" RESET << std::endl;
		std::cout << GREEN "double:\t" << static_cast<double>(str[0]) << RESET << std::endl;
	}
	// else if (str[0] < -128 || str[0] > 127)
	// 	std::cout << GREEN "char: " RESET << RED "impossible" RESET << std::endl;
	// else
	// 	std::cout << GREEN "char: " RESET << RED "Non displayable" RESET << std::endl;
}


void ScalarConverter::convertInt(const std::string& str) {
	double number = std::atof(str.c_str());

	if (static_cast<int>(number) > 32 && static_cast<int>(number) < 127)
		std::cout << GREEN "char:\t"<< static_cast<char>(number) << RESET << std::endl;
	// std::cout << GREEN "int:\t" << static_cast<int>(str[0]) << RESET << std::endl;
	// std::cout << GREEN "float:\t" << static_cast<float>(str[0]) << "f" RESET << std::endl;
	// std::cout << GREEN "double:\t" << static_cast<double>(str[0]) << RESET << std::endl;
}
// ============================================================================

// ============================== CHECK METHODS ===============================
bool ScalarConverter::isChar(const std::string& str) {
	if (str.size() == 1 && !std::isdigit(str[0]))
		return (true);
	return (false);
}

bool ScalarConverter::isInt(const std::string& str) {
	char *end;
	long int value;
	
	errno = 0;
	value = std::strtol(str.c_str(), &end, 10);
	
	// ! vericar se posso usar isso 
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		return (false);

	
	if (errno == ERANGE || *end != '\0')
		return (false);
	if (str[0] == '+' || str[0] == '-') {
		if (str.size() == 1 || !std::isdigit(str[1]))
			return (false);
	}
	return (true);
}
// bool ScalarConverter::isFloat(const std::string& str) {}
// bool ScalarConverter::isDouble(const std::string& str) {}
// ============================================================================