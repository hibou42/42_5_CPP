#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade), _inc_dec(false)
{
	std::cout << "Name constructor Bureaucrat called : " << _name << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Bureaucrat called : " << _name << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

bool	Bureaucrat::getInc_Dec() const
{
	return (this->_inc_dec);
}

void	Bureaucrat::incrementation()
{
	this->_grade--;
	this->_inc_dec = true;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrementation()
{
	this->_grade++;
	this->_inc_dec = false;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because ";
	}
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high !");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low !");
}

std::ostream &operator<<( std::ostream &o, Bureaucrat const &rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}