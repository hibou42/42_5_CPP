#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data {
	std::string	name;
	int			age;
};

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer &cpy);
		Serializer &operator=(const Serializer &rhs);
		~Serializer();

	public:
		static uintptr_t	serialize(Data *data);
		static Data*		deserialize(uintptr_t data);
};

#endif