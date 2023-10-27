#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Animal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string type)
{
	std::cout << "AAnimal with type parameter constructor called" << std::endl;
	_type = type;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AAnimal copy constructor called" << std::endl;

	if (this != &other)
	{
		*this = other;
	}
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}