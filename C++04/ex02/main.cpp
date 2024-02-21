#include "lib/AAnimal.hpp"
#include "lib/Cat.hpp"
#include "lib/Dog.hpp"
#include "lib/WrongAnimal.hpp"
#include "lib/WrongCat.hpp"

int main (void)
{
	//const AAnimal *aanimal = new AAnimal();
	const AAnimal *dog = new Dog();
	const AAnimal *cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << "Test default WrongAnimal sound :" << std::endl;
	const WrongAnimal *wronganimal = new WrongAnimal();
	const WrongAnimal *wrongcat = new WrongCat();
	wronganimal->makeSound();
	std::cout << wrongcat->getType() << std::endl;
	wrongcat->makeSound();

	delete dog;
	delete cat;
	delete wrongcat;

	return (0);
}