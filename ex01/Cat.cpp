#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &other): Animal("Cat")
{
	std::cout << "Cat copy constructor called" << std::endl;

	if (this != &other)
	{
		*this = other;
	}
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete	brain;
}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
		for (int i = 0; i < 100; i++)
		{
			brain->setIdeas(other.brain->getIdeas(i), i);
		}
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meow~" << std::endl;
}

std::string	Cat::getType() const
{
	return(_type);
}

void	Cat::setType(const std::string type)
{
	_type = type;
}