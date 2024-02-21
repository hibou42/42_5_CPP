#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    // Create bureaucrats
    Bureaucrat chief("Chief", 1); // Highest possible grade
    Bureaucrat manager("Manager", 75); // Mid-level grade
    Bureaucrat intern("Intern", 150); // Lowest possible grade

    // Create forms
    Form taxReturn("Tax Return", 50, 25); // Requires high grade to sign
    Form vacationRequest("Vacation Request", 100, 50); // Requires lower grade to sign

    // Print the bureaucrats and forms before signing
    std::cout << chief << std::endl;
    std::cout << manager << std::endl;
    std::cout << intern << std::endl;
    std::cout << taxReturn << std::endl;
    std::cout << vacationRequest << std::endl;

    // Attempt to sign forms
    chief.signForm(taxReturn);
    manager.signForm(vacationRequest);
    intern.signForm(taxReturn); // This should fail

    // Print the forms after signing attempts
    std::cout << taxReturn << std::endl;
    std::cout << vacationRequest << std::endl;


	std::cout << "ICI 1" << std::endl;
    // Increment and decrement grades of bureaucrats and attempt to sign again
    try {
        intern.decrementation(); // This should throw an exception
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
	std::cout << "ICI 2" << std::endl;
    try {
        chief.incrementation(); // This should also throw an exception
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}