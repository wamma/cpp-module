#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("None") {
	std::cout << "WrongAnimal 기본 생성자 호출" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "WrongAnimal Copy constructor called." << std::endl;
	if (this != &other) {
		*this = other;
	}
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal Copy assignment operator called." << std::endl;
	if (this != &other){
		type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal Sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}