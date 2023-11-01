#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _mold_idx(0)
{
	std::cout << "MateriaSource default constructor called" << std::endl;

	for (int i = 0; i < SLOT; i++)
	{
		_mold[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other): _mold_idx(0)
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
		_mold_idx = other._mold_idx;
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
				std::cout << "Same Materia already exists in mold slot [" << i << "]" << std::endl;
				return ;
			}
		}
		if (_mold[_mold_idx] == NULL)
		{
			_mold[_mold_idx] = m;
			_mold_idx = (_mold_idx + 1) % 4;
		}
		else
		{
			delete _mold[_mold_idx];
			_mold[_mold_idx] = m;
			_mold_idx = (_mold_idx + 1) % 4;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int			i = 0;
	AMateria	*clone_materia;

	while (i < SLOT)
	{
		if (type == _mold[i]->getType())
		{
			clone_materia = _mold[i]->clone();
			std::cout << "Successfully created Materia of type : [" << type << "]" << std::endl;
			return (clone_materia);
		}
		i++;
	}
	std::cout << "Materia creation of type A failed : [" << type << "]" << std::endl;
	return (NULL);
}