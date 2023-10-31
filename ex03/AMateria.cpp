#include "AMateria.hpp"

AMateria::AMateria(): _type("")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria constructor with type parameter called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria copy constructor called" << std::endl;

	if (this != &other)
	{
		*this = other;
	}
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

std::string const &	AMateria::getType() const
{
	return (_type);
}

void	AMateria::setType(std::string type)
{
	_type = type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* uses a basic materia at " << target.getName() << " *" << std::endl;
}