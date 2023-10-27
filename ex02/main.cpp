#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <cstdlib>

void	leak_check()
{
	std::system("leaks a.out");
}

int main()
{
	std::atexit(leak_check);

	std::cout << std::endl << "-----Constructor called-----" << std::endl;

	// const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	const WrongAnimal* w_i = new WrongCat();
	const WrongCat *down_w_i = (WrongCat *)w_i;

	std::cout << std::endl << "-----Up Casting-----" << std::endl;

	// std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	// meta->makeSound();
	j->makeSound();
	i->makeSound();

	std::cout << std::endl << "-----Down Casting-----" << std::endl;

	std::cout << w_i->getType() << " " << std::endl;
	std::cout << down_w_i->getType() << " " << std::endl;

	w_i->makeSound();
	down_w_i->makeSound();

	std::cout << std::endl << "-----Destructor called-----" << std::endl;

	delete j;
	delete i;
	// delete meta;
	delete w_i;

	return (0);
}