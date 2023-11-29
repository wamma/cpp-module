#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	this->numOfLearned = 0;
	for (int i = 0; i < _materiaSize; i++) {
		this->materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	this->numOfLearned = copy.numOfLearned;
	for (int i = 0; i < _materiaSize; i++) {
		if (copy.materias[i] != NULL) {
			this->materias[i] = copy.materias[i]->clone();
		} else {
			this->materias[i] = NULL;
		}
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < _materiaSize; i++) {
		if (this->materias[i] != NULL) {
			delete this->materias[i];
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	if (this == &copy) {
		return *this;
	}
	this->numOfLearned = copy.numOfLearned;
	for (int i = 0; i < _materiaSize; i++) {
		if (this->materias[i] != NULL) {
			delete this->materias[i];
		}
		if (copy.materias[i] != NULL) {
			this->materias[i] = copy.materias[i]->clone();
		}
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	if (this->numOfLearned < _materiaSize) {
		this->materias[this->numOfLearned] = m;
		this->numOfLearned++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < _materiaSize; i++) {
		if (this->materias[i] != NULL && this->materias[i]->getType() == type) {
			return this->materias[i]->clone();
		}
	}
}