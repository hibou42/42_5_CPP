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
	Cat *cat = new Cat();
	std::cout << "--> "<<  cat->getBrain()->getIdeas(0) << std::endl;

	Cat *cat2 = new Cat(*cat);
	cat->getBrain()->setIdeas("New idea", 0);
	std::cout << "--> "<< cat->getBrain()->getIdeas(0) << std::endl;
	std::cout << "--> "<< cat2->getBrain()->getIdeas(0) << std::endl;

	*cat2 = *cat;
	cat->getBrain()->setIdeas("AMAZING", 0);
	std::cout << "--> "<< cat->getBrain()->getIdeas(0) << std::endl;
	std::cout << "--> "<< cat2->getBrain()->getIdeas(0) << std::endl;

	delete cat;
	delete cat2;
	return 0;
}