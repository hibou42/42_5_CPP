#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
		return 1;
	}

	try {
		BitcoinExchange btc;
		btc.loadDatabase("data/data.csv");

		std::ifstream inputFile(argv[1]);
		if (!inputFile.is_open()) {
			throw std::runtime_error("Error: could not open input file.");
		}

		std::string line;
		while (std::getline(inputFile, line)) {
			if (line == "date | value") {
				continue;
			}

			std::istringstream ss(line);
			std::string date;
			float amount;

			if (std::getline(ss, date, '|') && ss >> amount) {
				try {
					float value = btc.getBitcoinValue(date, amount);
					std::cout << date << " => " << amount << " = " << value << std::endl;
				} catch (const std::exception &e) {
					std::cerr << e.what() << std::endl;
				}
			} else {
				std::cerr << "Error: bad input => " << line << std::endl;
			}
		}

		inputFile.close();
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}

	return 0;
}
