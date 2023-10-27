#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type)
{
	std::cout << "WrongAnimal with type parameter constructor called" << std::endl;
	_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;

	if (this != &other)
	{
		*this = other;
	}
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Growl..." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return(_type);
}

void	WrongAnimal::setType(const std::string type)
{
	_type = type;
}