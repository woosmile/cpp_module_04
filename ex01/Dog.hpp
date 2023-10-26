#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog&	operator=(const Dog &other);
		void		makeSound() const;
		std::string	getType() const;
		void		setType(const std::string type);
		std::string	getIdeas(const int idx) const;
		void		setIdeas(const std::string idea, const int idx);
};

#endif