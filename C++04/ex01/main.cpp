#include "lib/Animal.hpp"
#include "lib/Cat.hpp"
#include "lib/Dog.hpp"
#include "lib/Brain.hpp"
#include "lib/WrongAnimal.hpp"
#include "lib/WrongCat.hpp"

int main (void)
{
	Animal* animals[4];

	std::cout << "--- Tab creation ---" << std::endl;
	for(int i = 0; i < 2; ++i) {
		animals[i] = new Dog();
	}
	for(int i = 2; i < 4; ++i) {
		animals[i] = new Cat();
	}

	std::cout << "--- Tab delete ---" << std::endl;
	for(int i = 0; i < 4; ++i) {
	delete animals[i];
	}

	std::cout << "--- Brain test deep copy ---" << std::endl;
	Cat cat;
	Brain *catBrain = cat.getBrain();
	std::cout << "--> "<<  catBrain->getIdeas(0) << std::endl;

	Cat cat2(cat);
	Brain *cat2Brain = cat2.getBrain();
	catBrain->setIdeas("New idea", 0);
	std::cout << "--> "<< catBrain->getIdeas(0) << std::endl;
	std::cout << "--> "<< cat2Brain->getIdeas(0) << std::endl;

	cat2 = cat;
	catBrain->setIdeas("Bad idea", 0);
	std::cout << "--> "<< catBrain->getIdeas(0) << std::endl;
	std::cout << "--> "<< cat2Brain->getIdeas(0) << std::endl;
	// catBrain->setIdeas("nouvelle idée", 0);

	return 0;
}