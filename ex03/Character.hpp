#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

# define SLOT	4

class Character : public ICharacter
{
	private:
		AMateria	*_inventory[4];
		std::string	_name;
	public:
		Character();
		Character(const std::string name);
		Character(const Character &other);
		virtual ~Character();
		Character& operator=(const Character &other);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif