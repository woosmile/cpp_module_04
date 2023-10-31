#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define SLOT 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_mold[SLOT];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		virtual ~MateriaSource();
		MateriaSource& operator=(const MateriaSource &other);
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);
};

#endif