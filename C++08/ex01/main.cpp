#include "Span.hpp"
#include <cstdlib> // pour std::rand et std::srand
#include <ctime>   // pour std::time

int main() {
	try {
		int size = 5;
		std::cout << "\033[4;36mTEST BASIQUE\033[0m" << std::endl;
		Span sp;
		sp = Span(size);
		sp.addNumber(10);
		sp.addNumber(60);
		sp.addNumber(5);
		sp.addNumber(28);
		sp.addNumber(25);
		std::cout << "max = " << sp.maxVector() << std::endl;
		std::cout << "min = " << sp.minVector() << std::endl;
		std::cout << "delta max = " << sp.longestSpan() << std::endl;
		std::cout << "min delta = " << sp.shortestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		int size = 2;
		std::cout << "\033[4;31mTEST too much number in Vector\033[0m" << std::endl;
		Span sp2;
		sp2 = Span(size);
		sp2.addNumber(98);
		sp2.addNumber(10);
		sp2.addNumber(5);
		std::cout << "max = " << sp2.maxVector() << std::endl;
		std::cout << "min = " << sp2.minVector() << std::endl;
		std::cout << "delta max = " << sp2.longestSpan() << std::endl;
		std::cout << "min delta = " << sp2.shortestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		int size = 1;
		std::cout << "\033[4;36mTEST only one number in Vector\033[0m" << std::endl;
		Span sp3;
		sp3 = Span(size);
		sp3.addNumber(12);
		std::cout << "max = " << sp3.maxVector() << std::endl;
		std::cout << "min = " << sp3.minVector() << std::endl;
		std::cout << "delta max = " << sp3.longestSpan() << std::endl;
		std::cout << "min delta = " << sp3.shortestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		int size = 20000;
		std::cout << "\033[4;36mTEST with 20k of number\033[0m" << std::endl;
		Span sp4;
		sp4 = Span(size);

		std::srand(std::time(0));
		std::vector<int> randomNumbers;
		for (int i = 0; i < size; ++i) {
			randomNumbers.push_back(std::rand());
		}
		sp4.addNumbers(randomNumbers);

		std::cout << "max = " << sp4.maxVector() << std::endl;
		std::cout << "min = " << sp4.minVector() << std::endl;
		std::cout << "delta max = " << sp4.longestSpan() << std::endl;
		std::cout << "min delta = " << sp4.shortestSpan() << std::endl;
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return(0);
}