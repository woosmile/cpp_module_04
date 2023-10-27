#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog&	operator=(const Dog &other);
		void		makeSound() const;
		std::string	getType() const;
		void		setType(const std::string type);
};


#endif