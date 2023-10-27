#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <cstdlib>

void	leak_check()
{
	std::system("leaks a.out");
}

int main()
{
	std::atexit(leak_check);

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;

	Dog *bow = new Dog();
	Dog c_bow;

	Brain	awake_brain;
	Brain	*temp_brain;

	for (int i = 0; i < 100; i++)
	{
		awake_brain.setIdeas("Dog Awake!", i);
	}

	bow->setBrain(&awake_brain);
	temp_brain = bow->getBrain();
	for (int i = 0; i < 100; i++)
	{
		std::cout << temp_brain->getIdeas(i) << std::endl;
	}

	c_bow = *bow;
	temp_brain = c_bow.getBrain();
	for (int i = 0; i < 100; i++)
	{
		std::cout << temp_brain->getIdeas(i) << std::endl;
	}

	delete bow;

	return (0);
}