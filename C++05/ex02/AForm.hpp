#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm {
private:
	const std::string	_name;
	bool				_sign;

	const int 			_requ_sign;
	const int			_requ_exe;

public:
	AForm();
	AForm(std::string name, int requ_sign, int requ_exe);
	AForm(const AForm &cpy);
	AForm &operator=(AForm const &rhs);
	virtual ~AForm();

	void		beSigned(const Bureaucrat &bureaucrat);
	virtual void	execute(Bureaucrat const &executor) const = 0;

	std::string	getName() const;
	bool		getSign() const;
	int			getGradeRequ_sign() const;
	int			getGradeRequ_exe() const;

	class 	GradeTooHighException : public std::exception {
	public :
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
	public :
		virtual const char *what() const throw();
	};

	class	ExecutorException : public std::exception {
	public :
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif