#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat &other): Animal("Cat")
{
	std::cout << "Cat copy constructor called" << std::endl;
	
	_brain = new Brain();
	if (this != &other)
	{
		*this = other;
	}
}

Cat::~Cat()
{
	delete	_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
		delete this->_brain;
		this->_brain = new Brain();
		*_brain = *(other._brain);
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

Brain*	Cat::getBrain() const
{
	return (_brain);
}

void	Cat::setBrain(const Brain *brain)
{
	if (brain != NULL)
	{
		*_brain = *brain;
	}
}