#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog(); //up-casting
// 	const Animal* i = new Cat(); //up-casting

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;

// 	j->makeSound();
// 	i->makeSound();
// 	meta->makeSound();

// 	Dog* up_j = (Dog *)j;

// 	up_j->setIdeas("", 0);
// 	std::cout << up_j->getIdeas(0) << std::endl;

// 	return (0);
// }

// void	leak_check()
// {
// 	system("leaks a.out");
// }

int main()
{
	// atexit(leak_check);

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;
	
	return (0);
}