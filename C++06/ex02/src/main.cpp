#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include "../include/Base.hpp"

int main(void) {
	Base *p = generate();
	std::cout << "--- inditentify on pointeur = " ;
	identify(p);
	std::cout << "--- inditentify on reference = " ;
	identify(*p);
	return (0);
}