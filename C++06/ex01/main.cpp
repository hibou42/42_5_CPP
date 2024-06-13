#include <iostream>
#include <stdint.h>

struct Data {
	std::string	name;
	int			age;
};

uintptr_t	serialize(Data *data) {
	return (reinterpret_cast< uintptr_t >(data));
}

Data*		deserialize(uintptr_t data) {
	return (reinterpret_cast< Data* >(data));
}

int main() {
	Data *data = new Data;

	data->name = "hibou";
	data->age = 30;

	std::cout << "--- original data structure ---" << std::endl;
	std::cout << "name : " << data->name << std::endl;
	std::cout << "age : " << data->age << std::endl;

	std::cout << " --- version serialized ---" << std::endl;
	std::cout << serialize(data) << std::endl;

	std::cout << "--- resultat apres deserialisation --- " << std::endl;
	std::cout << "Name: " << deserialize(serialize(data))->name << std::endl;
	std::cout << "Age: " << deserialize(serialize(data))->age << std::endl;

	delete data;

	return 0;
}