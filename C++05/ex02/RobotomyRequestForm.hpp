#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm;

class RobotomyRequestForm : public AForm {
private:
	std::string _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &cpy);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
	~RobotomyRequestForm();

	void		execute(Bureaucrat const &executor) const;

	std::string	getTarget() const;
	
};

#endif
