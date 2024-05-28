#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"
class Form;

class Bureaucrat {
private:
	const std::string	_name;
	int 				_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(const Bureaucrat &cpy);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	~Bureaucrat();

	void			incrementation();
	void			decrementation();
	void			signForm(Form &form);

	std::string		getName() const;
	int 			getGrade() const;
	bool			getInc_Dec() const;

	class 	GradeTooHighException : public std::exception {
	public :
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
	public :
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif