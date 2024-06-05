#include "Converter.hpp"

// ============================================================================|
// Interaction fonctions
// ============================================================================|

void	Converter::execution() {
	convert();
}

// ============================================================================|
// Construction & destruction
// ============================================================================|

Converter::Converter() : AScalarConverter() {}

Converter::Converter(std::string str) : AScalarConverter() {
	this->setStr(str);
}

Converter::Converter(const Converter &cpy) : AScalarConverter() {
	*this = cpy;
}

Converter::~Converter() {}

// ============================================================================|
// Operator overload
// ============================================================================|

Converter &Converter::operator=(const Converter &rhs) {
	if (this != &rhs) {
		this->setStr(rhs.getStr());
		this->setType();
	}
	return *this;
}