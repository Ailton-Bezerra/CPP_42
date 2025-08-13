/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:14:29 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/13 14:19:00 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _data(other._data) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other)
		this->_data = other._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

bool BitcoinExchange::isValidDate(const std::string& date) const {
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return (false);
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
		return (false);
	return (true);
}

bool BitcoinExchange::isValidValue(const std::string& value) const {
	char* end;
	double val = std::strtod(value.c_str(), &end);

	if (*end != '\0')
		return (false);
	if (val < 1 || val > 1000)
		return (false);
	return (true);
}

void BitcoinExchange::loadDatabase(const std::string& filename) {
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		throw (std::runtime_error("couldn't open data base file"));

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line)) {

		std::stringstream ss(line);
		std::string date, priceStr;
		if (!std::getline(ss, date, ',') || !std::getline(ss, priceStr))
		continue;

		double price = std::atof(priceStr.c_str());
		_data[date] = price;
	}
}

void BitcoinExchange::processInputFile(const std::string& filename) const {
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		throw (std::runtime_error("Couldn't open input file"));

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line)) {
		if (line.empty())
			continue;

		std::stringstream ss(line);
		std::string date, valueStr;
		if (!std::getline(ss, date, '|') || !std::getline(ss, valueStr)) {
				std::cout << "Error: bad input => " << line << std::endl;
				continue;
		}

		//remove extra spaces
		if (!date.empty() && date[date.size() - 1] == ' ')
			date.erase(date.size() - 1);
		if (!valueStr.empty() && valueStr[0] == ' ')
			valueStr.erase(0, 1);
		if (!isValidDate(date)) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (!isValidValue(valueStr)) {
			std::cout << "Error: invalid value => " << valueStr << std::endl;
			continue;
		}

		double value = std::atof(valueStr.c_str());

		std::map<std::string, double>::const_iterator it = this->_data.lower_bound(date);
		if (it == this->_data.end())
			--it;

		else if (it->first != date) {
			if (it == _data.begin()) {
				std::cout << "No early date available for " << date << std::endl;
				continue;
			}
			--it;
		}
		
		// std::cout << "it->first: " << it->first << std::endl;
		// std::cout << "Value: " << value << std::endl;
		// std::cout << "it->second: " << it->second << std::endl;
		double result = value * it->second;
		// std::cout << "result: " << result << std::endl;
		std::cout << date << " => " << value << " = " << result << std::endl;
	}
}
