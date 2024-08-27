#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <algorithm>
#include <cctype>


class BitcoinExchange {

private:
	std::map<std::string, float> priceData;

	std::string findClosestDate(const std::string &date) const;

public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);
	~BitcoinExchange();

	void loadDatabase(const std::string &databaseFile);
	float getBitcoinValue(const std::string &date, float amount) const;
};

#endif
