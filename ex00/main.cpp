#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog(); //up-casting
	
	const WrongAnimal* i = new WrongCat(); //up-casting
	const WrongCat *down_i = (WrongCat *)i; //down-casting

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << down_i->getType() << " " << std::endl;

	j->makeSound();
	i->makeSound();
	meta->makeSound();
	down_i->makeSound();

	delete j;

	return (0);
}