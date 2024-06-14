#include "Converter.hpp"

uintptr_t	Converter::serialize(Data *data) {
	return (reinterpret_cast< uintptr_t >(data));
}

Data*		Converter::deserialize(uintptr_t data) {
	return (reinterpret_cast< Data* >(data));
}

Converter::Converter() {}

Converter::Converter(const Converter &cpy) {
	(void)cpy;
}

Converter &Converter::operator=(const Converter &rhs) {
	(void)rhs; 
	return (*this);
}

Converter::~Converter() {}