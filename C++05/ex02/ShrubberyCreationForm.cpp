#include "ShrubberyCreationForm.hpp"

// ============================================================================|
// Interaction fonctions
// ============================================================================|

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (getSign()){
		if (executor.getGrade() <= getGradeRequ_exe()){
			std::cout << executor.getName() << " execute " << _target << std::endl;
			std::string file = _target + "_shrubbery.txt";
			std::ofstream output(file.c_str());
			output << "     .^.\n"
					  "    .0.'.\n"
					  "   .'.'0'.\n"
					  "  0'.0.'.0.\n"
					  " .'.0.'.'.0.\n"
					  ".0.'.0.'.0.'.\n"
					  "   [_____]\n" << std::endl;
			std::cout << _target << ": Shrubbery has been create" << std::endl;
		}
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::ExecutorException();
}

// ============================================================================|
// Getters
// ============================================================================|

std::string	ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

// ============================================================================|
// Construction & destruction
// ============================================================================|

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery creation form", 145, 137), _target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery creation form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : AForm(cpy.getName(), cpy.getGradeRequ_sign(), cpy.getGradeRequ_exe()) {
	*this = cpy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// ============================================================================|
// Operator overload
// ============================================================================|

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	if (this != &rhs) {
		_target = rhs._target;
		AForm::operator=(rhs);
	}
	return(*this);
}
