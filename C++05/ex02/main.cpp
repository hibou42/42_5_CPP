#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	try {
		PresidentialPardonForm PresForm = PresidentialPardonForm("Break the boss car");
		Bureaucrat chief("Chief", 7);
		while (chief.getGrade() > 4) {
			std::cout << chief << PresForm;
			chief.signForm(PresForm);
			chief.executeForm(PresForm);
			chief.incrementation();
			std::cout << std::endl;
		}
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "----------------------------------------------------------------" << std::endl;

	try {
		RobotomyRequestForm RobotForm = RobotomyRequestForm("CutCut");
		Bureaucrat manager("Manager", 40);
		std::cout << std::endl;
		while (manager.getGrade() < 47) {
			std::cout << manager << RobotForm;
			manager.signForm(RobotForm);
			manager.executeForm(RobotForm);
			manager.decrementation();
			std::cout << std::endl;
		}
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "----------------------------------------------------------------" << std::endl;

	try {
		ShrubberyCreationForm ShrubForm = ShrubberyCreationForm("Tree");
		Bureaucrat intern("Intern", 135);
		std::cout << std::endl << intern << ShrubForm;;
		intern.signForm(ShrubForm);
		intern.executeForm(ShrubForm);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
