#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("None") {
	std::cout << "WrongAnimal 기본 생성자 호출" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	if (this != &other) {
		*this = other;
	}
	std::cout << "WrongAnimal Copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other){
		type = other.type;
	}
	std::cout << "WrongAnimal Copy assignment operator called." << std::endl;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal Sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}