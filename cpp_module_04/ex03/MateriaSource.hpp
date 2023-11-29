#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		static const int _materiaSize = 4;
		int numOfLearned;
		AMateria* materias[MateriaSource::_materiaSize];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		virtual ~MateriaSource();
		MateriaSource &operator=(const MateriaSource &copy);
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const &type);
};

#endif