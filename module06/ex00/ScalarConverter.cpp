/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:22:27 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/05 13:03:41 by ailbezer         ###   ########.fr       */
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
	else if (isInt(str))
		convertInt(str);
	if (isFloat(str))
		convertFloat(str);
		// std::cout << GREEN "float: " RESET << RED "impossible" RESET << std::endl;
	// if (!isDouble(str))
	// 	std::cout << GREEN "char: " RESET << RED "impossible" RESET << std::endl;
}

void ScalarConverter::convertChar(const std::string& str) {
	if (str[0] > 31 && str[0] < 127) {
		std::cout << GREEN "char:\t" << "'" + str + "'"  RESET << std::endl;
		std::cout << GREEN "int:\t" << static_cast<int>(str[0]) << RESET << std::endl;
		std::cout << GREEN "float:\t" << static_cast<float>(str[0]) << "f" RESET << std::endl;
		std::cout << GREEN "double:\t" << static_cast<double>(str[0]) << RESET << std::endl;
	}
}

void ScalarConverter::convertInt(const std::string& str) {
	double number = std::atof(str.c_str());
	int iNumber = static_cast<int>(number);

	if (iNumber > 32 && iNumber < 127)
		std::cout << GREEN "char:\t\'" << static_cast<char>(number) << "\'" RESET << std::endl;
	else if (iNumber < -128 || iNumber > 127 )
		std::cout << YELLOW "char:\timpossible" RESET << std::endl;
	else
		std::cout << YELLOW "char:\tNon displayable" RESET << std::endl;
	// if (number < std::numeric_limits<int>::min() || number > std::numeric_limits<int>::max())
	// 	std::cout << YELLOW "int:\timpossible" RESET << std::endl;
	// else (não precisa pq o codigo so cai nessa condição se for int)
	std::cout << GREEN "int:\t" <<  iNumber << RESET << std::endl;
	std::cout << GREEN "float:\t" << static_cast<float>(number) << "f" RESET << std::endl;
	std::cout << GREEN "double:\t" << number << RESET << std::endl;
}

void ScalarConverter::convertFloat(const std::string& str) {
	double number = std::atof(str.c_str());
	
	if (number > 32 && number < 127)
		std::cout << GREEN "char:\t\'" << static_cast<char>(number) << "\'" RESET << std::endl;
	else if (number < -128 || number > 127 )
		std::cout << YELLOW "char:\timpossible" RESET << std::endl;
	else
		std::cout << YELLOW "char:\tNon displayable" RESET << std::endl;
	if (number > INT_MAX || number < INT_MIN)
		std::cout << YELLOW "int:\timpossible" RESET << std::endl;
	else
		std::cout << GREEN "int:\t" <<  static_cast<int>(number) << RESET << std::endl;
	std::cout << GREEN "float:\t" << static_cast<float>(number) << "f" RESET << std::endl;
	std::cout << GREEN "double:\t" << number << RESET << std::endl;
	
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
	
	// // ! vericar se posso usar isso 
	// if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
	// 	return (false);
	if (value < INT_MIN || value > INT_MAX)
		return (false);
	
	if (errno == ERANGE || *end != '\0')
		return (false);
	if (str[0] == '+' || str[0] == '-') {
		if (str.size() == 1 || !std::isdigit(str[1]))
			return (false);
	}
	return (true);
}
bool ScalarConverter::isFloat(const std::string& str) {
	char *end;
	errno = 0;
	
	std::strtof(str.c_str(), &end);
	if (errno == ERANGE || end == str.c_str())
		return (false);
	if ((*end == 'f' && *(end + 1) == '\0'))
		return (true);
	return (false);
}
// bool ScalarConverter::isDouble(const std::string& str) {}
// ============================================================================