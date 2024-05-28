#include "lib/Animal.hpp"
#include "lib/Cat.hpp"
#include "lib/Dog.hpp"
#include "lib/WrongAnimal.hpp"
#include "lib/WrongCat.hpp"

int main (void)
{
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << "--- Test default sound Animal ---" << std::endl;
	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << "--- Test default WrongAnimal sound ---" << std::endl;
	const WrongAnimal *wronganimal = new WrongAnimal();
	const WrongAnimal *wrongcat = new WrongCat();
	std::cout << wronganimal->getType() << std::endl;
	std::cout << wrongcat->getType() << std::endl;
	wronganimal->makeSound();
	wrongcat->makeSound();

	delete dog;
	delete cat;
	delete wrongcat;
	delete animal;

	return (0);

}