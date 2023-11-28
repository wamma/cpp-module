#include "AAnimal.hpp"

AAnimal::AAnimal() : type("None") {
	std::cout << "AAnimal 기본 생성자 호출" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
	if (this != &other) {
		*this = other;
	}
	std::cout << "AAnimal Copy constructor called." << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other){
		type = other.type;
	}
	std::cout << "AAnimal Copy assignment operator called." << std::endl;
	return *this;
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal Sound!" << std::endl;
}

std::string AAnimal::getType() const {
	return type;
}