#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other): AAnimal("Dog")
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
}

Dog&	Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
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