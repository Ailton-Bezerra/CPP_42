


#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <map>

#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cstdlib>

class BitcoinExchange {
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& other);

		void loadDatabase(const std::string& filename);
		void processInputFile(const std::string& filename) const;

	private:
		std::map<std::string, double> _data; //cotação
		
		bool isValidDate(const std::string& date) const;
		bool isValidValue(const std::string& value) const;



};

#endif
