#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &other);
		~WrongCat();
		WrongCat&	operator=(const WrongCat &other);
		void		makeSound() const;
		std::string	getType() const;
		void		setType(const std::string type);
};


#endif