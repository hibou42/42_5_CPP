#include "Form.hpp"

// ============================================================================|
// Interaction fonctions
// ============================================================================|

void	Form::beSigned(const Bureaucrat &bureaucrat) {
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

std::string Form::getName() const {
	return (this->_name);
}

int Form::getGradeRequ_sign() const {
	return (this->_requ_sign);
}

int Form::getGradeRequ_exe() const {
	return (this->_requ_exe);
}

bool Form::getSign() const {
	return (this->_sign);
}

// ============================================================================|
// Exception handling
// ============================================================================|

const char	*Form::GradeTooHighException::what() const throw() {
	return ("\033[31mForm required grade too high !\033[0m");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("\033[31mForm required grade too low !\033[0m");
}

// ============================================================================|
// Construction & destruction
// ============================================================================|

Form::Form() : _sign(false), _requ_sign(150), _requ_exe(150) {
	std::cout << "Default constructor Form called" << std::endl;
}

Form::Form(std::string name, int requ_sign, int requ_exe) : _name(name), _sign(false), _requ_sign(requ_sign), _requ_exe(requ_exe) {
	std::cout << "Name constructor Form called : " << _name << std::endl;
	if (_requ_sign < 1 || _requ_exe < 1)
		throw Form::GradeTooHighException();
	if (_requ_sign > 150 || _requ_exe > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &cpy) : _requ_sign(cpy._requ_sign), _requ_exe(cpy._requ_exe) {
	*this = cpy;
}

Form::~Form() {
	std::cout << "Destructor Form called : " << _name << std::endl;
}

// ============================================================================|
// Operator overload
// ============================================================================|

Form &Form::operator=(Form const &rhs) {
	if (this != &rhs) {
		_sign = rhs._sign;
		// _requ_sign = rhs._requ_sign; impossible car _requ_sign est const
		// _requ_exe = rhs._requ_exe; impossible car _requ_exec est const
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {
	o << rhs.getName() << " need grade " << rhs.getGradeRequ_sign() << " to be signed, ";
	o <<  "need grade " << rhs.getGradeRequ_exe() << " to be exec and currently ";
	if (rhs.getSign() == true)
		o << "is \033[32msigned\033[0m" << std::endl;
	else
		o << "is not signed" << std::endl;
	return (o);
}
