#include "BitcoinExchange.hpp"

// ============================================================================|
// Interaction fonctions
// ============================================================================|

void BitcoinExchange::loadDatabase(const std::string &databaseFile) {
	std::ifstream file(databaseFile.c_str());
	if (!file.is_open()) {
		throw std::runtime_error("Error: could not open file.");
	}

	std::string line;
	while (std::getline(file, line)) {
		std::istringstream ss(line);
		std::string date;
		float price;

		if (std::getline(ss, date, ',') && ss >> price) {
			priceData[date] = price;
		}
	}
	file.close();
}

std::string BitcoinExchange::findClosestDate(const std::string &date) const {
	std::map<std::string, float>::const_iterator it = priceData.lower_bound(date);

	if (it == priceData.end() || it->first != date) {
		if (it != priceData.begin()) {
			--it;
		} else {
			return ""; // Si aucun résultat n'est trouvé
		}
	}

	return it->first;
}

bool isValidDate(std::string date) {
	// Supprimer les espaces avant et après la date
	date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());

	if (date.length() != 10 || date[4] != '-' || date[7] != '-') {
		return false;
	}
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());

	if (year < 2000 || year > 2024) return false; // Limiter les dates raisonnables
	if (month < 1 || month > 12) return false;
	if (day < 1 || day > 31) return false;

	// Gérer les mois avec moins de jours
	if (month == 2) {
		if (day > 29) return false;
		if (day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))) return false; // Années bissextiles
	}
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) return false;

	return true;
}

float BitcoinExchange::getBitcoinValue(const std::string &date, float amount) const {
	if (!isValidDate(date)) {
		throw std::runtime_error("Error: bad input => " + date);
	}

	if (amount < 0) {
		std::ostringstream oss;
		oss << amount;
		throw std::runtime_error("Error: bad amount => " + oss.str());
	}

	std::string closestDate = findClosestDate(date);
	if (closestDate.empty()) {
		throw std::runtime_error("Error: no valid date found.");
	}

	std::map<std::string, float>::const_iterator it = priceData.find(closestDate);
	if (it != priceData.end()) {
		return amount * it->second;
	}

	return 0.0f; // Au cas où aucune correspondance n'est trouvée, ce qui ne devrait pas arriver
}

// ============================================================================|
// Construction & destruction
// ============================================================================|

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy) {
	*this = cpy;
}

BitcoinExchange::~BitcoinExchange() {}

// ============================================================================|
// Operator overload
// ============================================================================|

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other) {
		this->priceData = other.priceData;
	}
	return *this;
}