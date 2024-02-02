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

	std::cout << "Test default sound Animal" << std::endl;
	animal->makeSound();

	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();


	const WrongAnimal *wronganimal = new WrongAnimal();
	const WrongAnimal *wrongcat = new WrongCat();

	std::cout << "Test default WrongAnimal sound :" << std::endl;
	wronganimal->makeSound();
	
	std::cout << wrongcat->getType() << std::endl;
	wrongcat->makeSound();
	

	delete dog;
	delete cat;
	delete wrongcat;
	delete animal;

	return (0);
}