#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <stdint.h>

struct Data {
	std::string	name;
	int			age;
};

class Converter {
	private:
		Converter();
		Converter(const Converter &cpy);
		Converter &operator=(const Converter &rhs);
		~Converter();

	public:
		static uintptr_t	serialize(Data *data);
		static Data*		deserialize(uintptr_t data);
};

#endif