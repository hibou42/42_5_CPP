#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
class Bureaucrat;  // Forward declaration
#include "Form.hpp"

class Bureaucrat
{
private:
	const std::string	_name;
	int 				_grade;
	bool				_inc_dec;

public:
	Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(const Bureaucrat &cpy);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	~Bureaucrat();

	std::string		getName() const;
	int 			getGrade() const;
	bool			getInc_Dec() const;
	
	void			incrementation();
	void			decrementation();

	void			signForm(Form &form);

	class 	GradeTooHighException : public std::exception
	{
	public :
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	public :
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif