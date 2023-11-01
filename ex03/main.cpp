#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <cstdlib>

void	leak_check()
{
	std::system("leaks a.out");
}

int main()
{
	std::atexit(leak_check);

	std::cout << std::endl << "-----Basic Test-----" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl << "-----Advanced Test-----" << std::endl;

	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());

	std::cout << std::endl << "-----Over Materia in MateriaSource-----" << std::endl;
	
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());

	std::cout << std::endl << "-----Same Materia in MateriaSource-----" << std::endl;

	AMateria	*same_cure = new Cure();
	src2->learnMateria(same_cure);
	src2->learnMateria(same_cure);

	ICharacter* me2 = new Character("me");
	
	AMateria* tmp2;

	std::cout << std::endl << "-----Same Materia in Character-----" << std::endl;

	tmp2 = src2->createMateria("ice");
	me2->equip(tmp2);
	me2->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	me2->equip(tmp2);
	me2->equip(tmp2);
	
	ICharacter* bob2 = new Character("bob");

	me2->use(0, *bob2);
	me2->use(1, *bob2);

	AMateria* tmp3[3];

	tmp3[0] = src2->createMateria("ice");
	me2->equip(tmp3[0]);
	tmp3[1] = src2->createMateria("cure");
	me2->equip(tmp3[1]);
	tmp3[2] = src2->createMateria("cure");

	std::cout << std::endl << "-----Full inventory-----" << std::endl;

	me2->equip(tmp3[2]);

	me2->use(2, *bob2);
	me2->use(3, *bob2);

	std::cout << std::endl << "-----Unequip-----" << std::endl;

	me2->unequip(2);
	me2->unequip(3);

	me2->unequip(2);
	me2->unequip(3);

	delete bob2;
	delete me2;
	delete src2;
	delete tmp3[0];
	delete tmp3[1];

	return (0);
}