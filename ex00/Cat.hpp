#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &other);
		virtual ~Cat();
		Cat&	operator=(const Cat &other);
		virtual void		makeSound() const;
		virtual std::string	getType() const;
		virtual void		setType(const std::string type);
};


#endif