#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat&				operator=(const Cat &other);
		virtual void		makeSound() const;
		virtual std::string	getType() const;
		virtual void		setType(const std::string type);
		virtual Brain*		getBrain() const;
		virtual void		setBrain(const Brain *brain);
};

#endif