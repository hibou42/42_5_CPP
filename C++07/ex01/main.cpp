#include "iter.hpp"

int main() {
	std::cout << "\033[4;32mTEST INT\033[0m" << std::endl;
	int tab[] = {28, 35, 10 , 42};
	iter(tab, 3, printIter);

	std::cout << "---------------------------------------------" <<std::endl;

	std::cout << "\033[4;33mTEST FLOAT\033[0m" << std::endl;
	float tab1[] = {1.25, 5.97, 2.98, 53, 12.8};
	iter(tab1, 4, printIter);

	std::cout << "---------------------------------------------" <<std::endl;

	std::cout << "\033[4;34mTEST CHAR\033[0m" << std::endl;
	char tab2[] = {'h', 'i', 'b', 'o', 'u'};
	iter(tab2, 5, printIter);

	return 0;
}
