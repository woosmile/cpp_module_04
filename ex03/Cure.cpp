#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &other): AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;

	if (this != &other)
	{
		*this = other;
	}
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure &other)
{
	std::cout << "Cure copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria	*new_cure;

	new_cure = new Cure();
	*new_cure = *this;

	return (new_cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}