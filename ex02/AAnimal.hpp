#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class	AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal();
		AAnimal(const std::string type);
		AAnimal(const AAnimal &other);
		virtual ~AAnimal();
		AAnimal&	operator=(const AAnimal &other);
		virtual void		makeSound() const = 0;
		virtual std::string	getType() const = 0;
		virtual void		setType(const std::string type) = 0;
};

#endif