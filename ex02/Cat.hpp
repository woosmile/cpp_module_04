#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat&	operator=(const Cat &other);
		void		makeSound() const;
		std::string	getType() const;
		void		setType(const std::string type);
};


#endif