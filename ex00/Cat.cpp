#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
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
}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
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