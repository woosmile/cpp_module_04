#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;

	for (int i = 0; i < SLOT; i++)
	{
		_mold[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < SLOT; i++)
	{
		_mold[i] = NULL;
	}
	if (this != &other)
	{
		*this = other;
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;

	for (int i = 0; i < SLOT; i++)
	{
		if (_mold[i] != NULL)
			delete _mold[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < SLOT; i++)
		{
			if (_mold[i] != NULL)
			{
				delete _mold[i];
				_mold[i] = NULL;
			}
		}
		for (int i = 0; i < SLOT; i++)
		{
			if (other._mold[i] != NULL)
				_mold[i] = other._mold[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
		std::cout << "Unknown Materia" << std::endl;
	else
	{
		for (int i = 0; i < SLOT; i++)
		{
			if (_mold[i] == m)
			{
				std::cout << "Same Materia already exists in inventory slot [" << i << "]" << std::endl;
				return ;
			}
		}
		for (int i = 0; i < SLOT; i++)
		{
			if (_mold[i] == NULL)
			{
				_mold[i] = m;
				return ;
			}
		}
		delete m;
		std::cout << "mold is full" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;

	while (i < 4)
	{
		if (type == _mold[i]->getType())
		{
			std::cout << "Successfully created Materia of type : [" << type << "]" << std::endl;
			return (_mold[i]->clone());
		}
		i++;
	}
	std::cout << "Materia creation of type A failed : [" << type << "]" << std::endl;
	return (NULL);
}