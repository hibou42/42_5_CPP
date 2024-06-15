#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data *data) {
	return (reinterpret_cast< uintptr_t >(data));
}

Data*		Serializer::deserialize(uintptr_t data) {
	return (reinterpret_cast< Data* >(data));
}

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &cpy) {
	(void)cpy;
}

Serializer &Serializer::operator=(const Serializer &rhs) {
	(void)rhs; 
	return (*this);
}

Serializer::~Serializer() {}