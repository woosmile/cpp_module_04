#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string type)
{
	std::cout << "Animal with type parameter constructor called" << std::endl;
	_type = type;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;

	if (this != &other)
	{
		*this = other;
	}
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Growl..." << std::endl;
}

std::string	Animal::getType() const
{
	return(_type);
}

void	Animal::setType(const std::string type)
{
	_type = type;
}