#include <string>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::cout << "           "<< str << std::endl;

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adresse str       :   " << &str << std::endl;
	std::cout << "Adresse strPTR    :   " << stringPTR << std::endl;
	std::cout << "Adresse strREF    :   " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Valeur str        :   " << str << std::endl;
	std::cout << "Valeur strPTR     :   " << *stringPTR << std::endl;
	std::cout << "Valeur strREF     :   " << stringREF << std::endl;
}
