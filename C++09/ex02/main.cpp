#include "PmergeMe.hpp"
#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " <list of positive integers>" << std::endl;
		return 1;
	}

	PmergeMe pmergeme;

	try {
		for (int i = 1; i < argc; ++i) {
			int value = std::atoi(argv[i]);
			if (value <= 0) {
				throw std::runtime_error("Error: invalid integer input");
			}
			pmergeme.addValue(value);
		}

		std::cout << "Before: ";
		for (int i = 1; i < argc; ++i) {
			std::cout << argv[i] << " ";
		}
		std::cout << std::endl;

		pmergeme.sortAndMeasureTime();

		std::cout << "After (std::vector): ";
		for (size_t i = 0; i < pmergeme.getVector().size(); ++i) {
			std::cout << pmergeme.getVector()[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "After (std::deque): ";
		for (size_t i = 0; i < pmergeme.getDeque().size(); ++i) {
			std::cout << pmergeme.getDeque()[i] << " ";
		}
		std::cout << std::endl;

	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}

	return 0;
}
