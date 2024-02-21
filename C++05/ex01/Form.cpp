#include "Form.hpp"


Form::Form() : _requ_sign(150), _requ_exe(150)
{
	std::cout << "Default constructor Form called" << std::endl;
}

Form::Form(std::string name, int requ_sign, int requ_exe) : _name(name), _sign(false), _requ_sign(requ_sign), _requ_exe(requ_exe)
{
	std::cout << "Name constructor Form called : " << _name << std::endl;
	if (_requ_sign < 1 || _requ_exe < 1)
		throw Form::GradeTooHighException();
	if (_requ_sign > 150 || _requ_exe > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &cpy) : _requ_sign(cpy._requ_sign), _requ_exe(cpy._requ_exe)
{
	*this = cpy;
}

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		_sign = rhs._sign;
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor Form called : " << _name << std::endl;
}

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getGradeRequ_sign() const
{
	return (this->_requ_sign);
}

int Form::getGradeRequ_exe() const
{
	return (this->_requ_exe);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeRequ_sign())
		throw GradeTooHighException();
	else
	{
		if (this->_sign != true)
			_sign = true;
	}
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high !");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low !");
}

std::ostream & operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName() << " need grade " << rhs.getGradeRequ_sign() << " to be signed, ";
	o <<  "need grade " << rhs.getGradeRequ_exe() << " to be exec" << std::endl;

	return (o);
}
