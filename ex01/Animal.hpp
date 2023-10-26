#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const std::string type);
		Animal(const Animal &other);
		virtual ~Animal();
		Animal&	operator=(const Animal &other);
		virtual void		makeSound() const;
		virtual std::string	getType() const;
		virtual void		setType(const std::string type);
};

#endif