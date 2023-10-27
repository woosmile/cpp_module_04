#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal();
		WrongAnimal&	operator=(const WrongAnimal &other);
		void		makeSound() const;
		std::string	getType() const;
		void		setType(const std::string type);
};

#endif