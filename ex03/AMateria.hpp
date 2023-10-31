#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &other);
		virtual ~AMateria();
		AMateria&			operator=(const AMateria &other);
		std::string const &	getType() const;
		void				setType(const std::string type);
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif