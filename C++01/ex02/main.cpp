#include <string>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adresse str       :   " << &str << std::endl;
	std::cout << "Adresse stringPTR :   " << stringPTR << std::endl;
	std::cout << "Adresse stringREF :   " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Valeur str        :   " << str << std::endl;
	std::cout << "Valeur stringPTR  :   " << *stringPTR << std::endl;
	std::cout << "Valeur stringREF  :   " << stringREF << std::endl;
}