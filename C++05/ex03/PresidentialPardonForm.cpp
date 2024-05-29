#include "PresidentialPardonForm.hpp"

// ============================================================================|
// Interaction fonctions
// ============================================================================|

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (getSign()){
		if (executor.getGrade() <= getGradeRequ_exe())
			std::cout << _target << ": was forgiven by Zaphod Beeblebrox" << std::endl;
		else
			throw AForm::GradeTooHighException();
	}
	else
		throw AForm::ExecutorException();
}

// ============================================================================|
// Getters
// ============================================================================|

std::string	PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

// ============================================================================|
// Construction & destruction
// ============================================================================|

PresidentialPardonForm::PresidentialPardonForm()  : AForm("Presidential Pardon Form", 25, 5), _target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : AForm(cpy.getName(), cpy.getGradeRequ_sign(), cpy.getGradeRequ_exe()) {
	*this = cpy;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

// ============================================================================|
// Operator overload
// ============================================================================|

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	if (this != &rhs) {
		_target = rhs._target;
		AForm::operator=(rhs);
	}
	return (*this);
}




