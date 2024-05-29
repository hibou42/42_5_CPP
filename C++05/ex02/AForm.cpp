#include "AForm.hpp"

// ============================================================================|
// Interaction fonctions
// ============================================================================|

void	AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->getGradeRequ_sign())
		throw GradeTooHighException();
	else {
		if (this->_sign != true)
			_sign = true;
	}
}

// ============================================================================|
// Getters
// ============================================================================|

std::string AForm::getName() const {
	return (this->_name);
}

int AForm::getGradeRequ_sign() const {
	return (this->_requ_sign);
}

int AForm::getGradeRequ_exe() const {
	return (this->_requ_exe);
}

bool AForm::getSign() const {
	return (this->_sign);
}

// ============================================================================|
// Exception handling
// ============================================================================|

const char	*AForm::GradeTooHighException::what() const throw() {
	return ("\033[31mAForm required grade too high !\033[0m");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("\033[31mAForm required grade too low !\033[0m");
}

const char *AForm::ExecutorException::what() const throw() {
	return ("\033[31mForm need to be signed before execution\033[0m");
}

// ============================================================================|
// Construction & destruction
// ============================================================================|

AForm::AForm() : _sign(false), _requ_sign(150), _requ_exe(150) {
	std::cout << "Default constructor AForm called" << std::endl;
}

AForm::AForm(std::string name, int requ_sign, int requ_exe) : _name(name), _sign(false), _requ_sign(requ_sign), _requ_exe(requ_exe) {
	std::cout << "Name constructor AForm called : " << _name << std::endl;
	if (_requ_sign < 1 || _requ_exe < 1)
		throw AForm::GradeTooHighException();
	if (_requ_sign > 150 || _requ_exe > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &cpy) : _requ_sign(cpy._requ_sign), _requ_exe(cpy._requ_exe) {
	*this = cpy;
}

AForm::~AForm() {
	std::cout << "Destructor AForm called : " << _name << std::endl;
}

// ============================================================================|
// Operator overload
// ============================================================================|

AForm &AForm::operator=(AForm const &rhs) {
	if (this != &rhs) {
		_sign = rhs._sign;
		// _requ_sign = rhs._requ_sign; impossible car _requ_sign est const
		// _requ_exe = rhs._requ_exe; impossible car _requ_exec est const
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs) {
	o << rhs.getName() << " need grade " << rhs.getGradeRequ_sign() << " to be signed, ";
	o <<  "need grade " << rhs.getGradeRequ_exe() << " to be exec and currently ";
	if (rhs.getSign() == true)
		o << "is \033[32msigned\033[0m" << std::endl;
	else
		o << "is not signed" << std::endl;
	return (o);
}
