#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &other): AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;

	if (this != &other)
	{
		*this = other;
	}
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice &other)
{
	std::cout << "Ice copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria	*new_Ice;

	new_Ice = new Ice();
	*new_Ice = *this;

	return (new_Ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}