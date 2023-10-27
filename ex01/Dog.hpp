#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog&				operator=(const Dog &other);
		virtual void		makeSound() const;
		virtual std::string	getType() const;
		virtual void		setType(const std::string type);
		virtual Brain*		getBrain() const;
		virtual void		setBrain(const Brain *brain);
};

#endif