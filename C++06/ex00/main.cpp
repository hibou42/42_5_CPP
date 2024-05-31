#include "convert.hpp"

int main(int argc, char** argv)
{
	if (argc < 2){
		std::cout << "No arguments" << std::endl;
		exit(EXIT_FAILURE);
	}
	Convert input;
	std::string	str = static_cast<std::string>(argv[1]);
	std::cout << "Input = " << str << std::endl;
	if (str.length() == 1)
		input.parsing_input_length_1(str);
	else{
		input.parsing_input(str);
	}
	input.convert_to(str);
	return (0);
}