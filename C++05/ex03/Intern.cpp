
#include "Intern.hpp"

// ============================================================================|
// Interaction fonctions
// ============================================================================|

AForm* Intern::makeForm(std::string formName, std::string target) {
	std::string form[3] = {"Presidential pardon", "Robotomy request", "Shrubbery creation"};
	AForm* (Intern::*ptr_form[3]) (std::string) = {&Intern::president, &Intern::robot, &Intern::shrubb};
	for (int i = 0; i < 3; i++){
		if (form[i] == formName)
			return ((this->*ptr_form[i])(target));
	}
	std::cout << "The form " << formName << " doesn't exist !" << std::endl;
	return (NULL);
}

AForm*	Intern::president(std::string target){
	std::cout << "Intern creates PresidentialPardonForm " << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::robot(std::string target){
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::shrubb(std::string target){
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(target));
}

// ============================================================================|
// Construction & destruction
// ============================================================================|

Intern::Intern() {
	std::cout << "Intern created" << std::endl;
}

Intern::Intern(Intern const &cpy) {
	*this = cpy;
}

Intern::~Intern() {}

// ============================================================================|
// Operator overload
// ============================================================================|

Intern &Intern::operator=(Intern const &rhs) {
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}
