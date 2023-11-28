#include "AAnimal.hpp"

AAnimal::AAnimal() : type("None") {}

AAnimal::AAnimal(const AAnimal& other) {
	if (this != &other) {
		*this = other;
	}
}

AAnimal::~AAnimal() {}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other){
		type = other.type;
	}
	return *this;
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal Sound!" << std::endl;
}

std::string AAnimal::getType() const {
	return type;
}