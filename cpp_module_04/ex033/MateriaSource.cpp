#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		this->source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		if (this->source[i])
			delete this->source[i];
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; ++i)
		this->source[i] = copy.source[i]->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->source[i])
		{
			delete this->source[i];
		}
		this->source[i] = copy.source[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->source[i])
		{
			this->source[i] = m->clone();
			return;
		}
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