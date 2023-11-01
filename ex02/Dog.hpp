#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(const Dog &other);
		virtual ~Dog();
		Dog&	operator=(const Dog &other);
		virtual void		makeSound() const;
		virtual std::string	getType() const;
		virtual void		setType(const std::string type);
};


#endif