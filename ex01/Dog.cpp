#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &other): Animal("Dog")
{
	std::cout << "Dog copy constructor called" << std::endl;

	if (this != &other)
	{
		*this = other;
	}
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete	brain;
}

Dog&	Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;

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

void	Dog::makeSound() const
{
	std::cout << "bow-wow!" << std::endl;
}

std::string	Dog::getType() const
{
	return(_type);
}

void	Dog::setType(const std::string type)
{
	_type = type;
}

std::string	Dog::getIdeas(const int idx) const
{
	if (idx < 0 || idx > 99)
	{
		std::cout << "wrong idea idx!" << std::endl;
		return (NULL);
	}
	else
	{
		return (brain->getIdeas(idx));
	}
}

void	Dog::setIdeas(const std::string idea, const int idx)
{
	if (idx < 0 || idx > 99)
	{
		std::cout << "wrong idea idx!" << std::endl;
	}
	else
	{
		brain->setIdeas(idea, idx);
	}
}
