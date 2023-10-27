#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat copy constructor called" << std::endl;

	if (this != &other)
	{
		*this = other;
	}
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "meow~" << std::endl;
}

std::string	WrongCat::getType() const
{
	return(_type);
}

void	WrongCat::setType(const std::string type)
{
	_type = type;
}