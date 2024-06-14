#include "Converter.hpp"

int main() {
	Data *data = new Data;

	data->name = "hibou";
	data->age = 30;

	std::cout << "--- original data structure ---" << std::endl;
	std::cout << "name : " << data->name << std::endl;
	std::cout << "age : " << data->age << std::endl;

	std::cout << " --- version serialized ---" << std::endl;
	std::cout << Converter::serialize(data) << std::endl;

	std::cout << "--- resultat apres deserialisation --- " << std::endl;
	std::cout << "Name: " << Converter::deserialize(Converter::serialize(data))->name << std::endl;
	std::cout << "Age: " << Converter::deserialize(Converter::serialize(data))->age << std::endl;

	delete data;

	return 0;
}