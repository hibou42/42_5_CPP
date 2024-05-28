#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	// Create bureaucrats
	Bureaucrat chief("Chief", 1); // Highest possible grade
	Bureaucrat manager("Manager", 75); // Mid-level grade
	Bureaucrat intern("Intern", 150); // Lowest possible grade
	// Create forms
	Form form50("form50", 50, 1);
	Form form75("form75", 75, 1);
	Form form149("form149", 149, 1);
	std::cout << "----------------------------------------------------------------" << std::endl;
	// Print the bureaucrats and forms before signing
	std::cout << chief << manager << intern << form50 << form149;
	std::cout << "----------------------------------------------------------------" << std::endl;
	// Attempt to sign forms
	chief.signForm(form50);
	manager.signForm(form75);
	intern.signForm(form149); // This should fail
	std::cout << "----------------------------------------------------------------" << std::endl;
	// Print the forms after signing attempts
	std::cout << form50 << form75 << form149;
	std::cout << "----------------------------------------------------------------" << std::endl;
	// Increment and decrement grades of bureaucrats and attempt to sign again
	intern.incrementation();
	intern.signForm(form149); // This should not fail anymore
	std::cout << form149;
	std::cout << "----------------------------------------------------------------" << std::endl;

	return 0;
}
