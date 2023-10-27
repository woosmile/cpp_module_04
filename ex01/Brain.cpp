#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "";
	}
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;

	if (this != &other)
	{
		*this = other;
	}
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;

	if (this != &other)
	{
		for(int i = 0; i < 100; i++)
		{
			ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

std::string	Brain::getIdeas(const int idx) const
{
	if (idx < 0 || idx > 99)
	{
		std::cout << "wrong idea idx!" << std::endl;
		return (NULL);
	}
	else
	{
		return (ideas[idx]);
	}
}

void	Brain::setIdeas(const std::string idea, const int idx)
{
	if (idx < 0 || idx > 99)
	{
		std::cout << "wrong idea idx!" << std::endl;
	}
	else
	{
		ideas[idx] = idea;
	}
}