#include "Bureaucrat.hpp"

// ============================================================================|
// Interaction fonctions
// ============================================================================|

void	Bureaucrat::incrementation() {
	this->_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementation() {
	this->_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(AForm &form) {
	try {
		if (form.getSign() == false) {
			form.beSigned(*this);
			std::cout << _name << " signed " << form.getName() << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form) {
	try {
		form.execute(*this);
		std::cout << _name << " execute " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

// ============================================================================|
// Getters
// ============================================================================|

std::string Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

// ============================================================================|
// Exception handling
// ============================================================================|

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("\033[31mBureaucrat Grade too high !\033[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("\033[31mBureaucrat Grade too low !\033[0m");
}

// ============================================================================|
// Construction & destruction
// ============================================================================|

Bureaucrat::Bureaucrat() {
	std::cout << "Default constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade) {
	std::cout << "Name constructor Bureaucrat called : " << _name << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor Bureaucrat called : " << _name << std::endl;
}

// ============================================================================|
// Operator overload
// ============================================================================|

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs) {
		// this->_name = rhs.getName(); impossible car _name est const
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}