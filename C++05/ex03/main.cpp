#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main() {
	try {
		Intern	intern1;
		AForm	*form1;
		form1 = intern1.makeForm("Presidential pardon", "Break the boss car");
		Bureaucrat chief("Chief", 5);
		std::cout << chief << *form1;
		chief.signForm(*form1);
		chief.executeForm(*form1);
		std::cout << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "----------------------------------------------------------------" << std::endl;

	try {
		Intern	intern2;
		AForm	*form2;
		form2 = intern2.makeForm("Robotomy request", "CutCut");
		Bureaucrat manager("Manager", 40);
		std::cout << manager << *form2;
		manager.signForm(*form2);
		manager.executeForm(*form2);
		std::cout << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "----------------------------------------------------------------" << std::endl;

	try {
		Intern	intern3;
		AForm	*form3;
		form3 = intern3.makeForm("Shrubbery creation", "Tree");
		Bureaucrat lowBureau("LowBureau", 135);
		std::cout << std::endl << lowBureau << *form3;;
		lowBureau.signForm(*form3);
		lowBureau.executeForm(*form3);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "----------------------------------------------------------------" << std::endl;

	try {
		Intern	intern4;
		AForm	*form4;
		form4 = intern4.makeForm("ShittyForm", "Damn");
		(void)form4;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
