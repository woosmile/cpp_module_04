#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &other): Animal("Dog")
{
	std::cout << "Dog copy constructor called" << std::endl;

	_brain = new Brain();
	if (this != &other)
	{
		*this = other;
	}
}

Dog::~Dog()
{
	delete	_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
		delete this->_brain;
		this->_brain = new Brain();
		*_brain = *(other._brain);
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

Brain*	Dog::getBrain() const
{
	return (_brain);
}

void	Dog::setBrain(const Brain *brain)
{
	if (brain != NULL)
	{
		*_brain = *brain;
	}
}
