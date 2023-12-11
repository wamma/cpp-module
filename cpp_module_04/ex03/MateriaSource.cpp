#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		this->source[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->source[i])
		{
			delete this->source[i];
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; ++i)
	{
		if (copy.source[i])
		{
			this->source[i] = copy.source[i]->clone();
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->source[i])
		{
			delete this->source[i];
		}
		if (copy.source[i])
		{
			this->source[i] = copy.source[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while (this->source[i] != 0 && i < 4)
		++i;
	if (i >= 4)
	{
		std::cout << "Can't learn Materia" << std::endl;
		return;
	}
	else
	{
		this->source[i] = m;
		std::cout << "Materia " << m->getType() << " learn!" << std::endl;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->source[i] && this->source[i]->getType() == type)
		{
			return (this->source[i]->clone());
		}
	}
	return (NULL);
}