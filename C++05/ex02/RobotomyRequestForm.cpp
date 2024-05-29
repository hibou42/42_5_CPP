
#include "RobotomyRequestForm.hpp"

// ============================================================================|
// Interaction fonctions
// ============================================================================|

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (getSign()) {
		if (executor.getGrade() <= getGradeRequ_exe()){
			std::cout << executor.getName() << " execute " << _target << std::endl;
			int val = rand();
			if (val % 2)
				std::cout << _target << " : has been robotomized successfully" << std::endl;
			else
				std::cout << _target << " : hasn't been robotomized" << std::endl;
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

std::string	RobotomyRequestForm::getTarget() const {
	return (this->_target);
}

// ============================================================================|
// Construction & destruction
// ============================================================================|

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy request form", 72, 45), _target("Default") {
	std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy request form", 72, 45), _target(target) {
	std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : AForm(cpy.getName(), cpy.getGradeRequ_sign(), cpy.getGradeRequ_exe()) {
	*this = cpy;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

// ============================================================================|
// Operator overload
// ============================================================================|

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	if (this != &rhs) {
		_target = rhs._target;
		AForm::operator=(rhs);
	}
	return (*this);
}
