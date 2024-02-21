#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
class Form;  // Forward declaration
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_sign;
	const int 			_requ_sign;
	const int			_requ_exe;

public:
	Form();
	Form(std::string name, int requ_sign, int requ_exe);
	Form(const Form &cpy);
	Form &operator=(Form const &rhs);
	~Form();

	std::string	getName() const;
	int			getGradeRequ_sign() const;
	int			getGradeRequ_exe() const;

	void		beSigned(const Bureaucrat &bureaucrat);

	class 	GradeTooHighException : public std::exception
	{
	public :
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	public :
		virtual const char *what() const throw();
	};
};

	std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif