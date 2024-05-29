
#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
	AForm* president(std::string target);
	AForm* robot(std::string target);
	AForm* shrubb(std::string target);

public:
	Intern();
	Intern(Intern const &cpy);
	Intern &operator=(Intern const &rhs);
	~Intern();

	AForm* makeForm(std::string formName, std::string target);
};

#endif
