#include "Character.hpp"

Character::Character(): _name("")
{
	std::cout << "Character default constructor called" << std::endl;

	for (int i = 0; i < SLOT; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::Character(const std::string name): _name(name)
{
	std::cout << "Character constructor with name parameter called" << std::endl;

	for (int i = 0; i < SLOT; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::Character(const Character &other)
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < SLOT; i++)
	{
		_inventory[i] = NULL;
	}
	if (this != &other)
	{
		*this = other;
	}
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;

	for (int i = 0; i < SLOT; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}
Character& Character::operator=(const Character &other)
{
	std::cout << "Character copy assignment operator called" << std::endl;

	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < SLOT; i++)
		{
			if (_inventory[i] != NULL)
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
		}
		for (int i = 0; i < SLOT; i++)
		{
			if (other._inventory[i] != NULL)
				_inventory[i] = other._inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		std::cout << "Unknown Materia" << std::endl;
	else
	{
		for (int i = 0; i < SLOT; i++)
		{
			if (_inventory[i] == m)
			{
				std::cout << "Same Materia already exists in inventory slot [" << i << "]" << std::endl;
				return ;
			}
		}
		for (int i = 0; i < SLOT; i++)
		{
			if (_inventory[i] == NULL)
			{
				_inventory[i] = m;
				return ;
			}
		}
		delete m;
		std::cout << "inventory is full" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		std::cout << "Wrong index" << std::endl;
	else
	{
		if (_inventory[idx] == NULL)
			std::cout << "Empty slot" << std::endl;
		else
			_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		std::cout << "Wrong index" << std::endl;
	else
	{
		if (_inventory[idx] != NULL)
			_inventory[idx]->use(target);
		else
			std::cout << "No Materia" << std::endl;
	}
}