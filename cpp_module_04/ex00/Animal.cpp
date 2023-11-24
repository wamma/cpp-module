#include "Animal.hpp"

Animal::Animal() : type("None") {
	std::cout << "Animal 기본 생성자 호출" << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << "Animal Copy constructor called." << std::endl;
	if (this != &other) {
		*this = other;
	}
}

Animal::~Animal() {
	std::cout << "Animal Destructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal Copy assignment operator called." << std::endl;
	if (this != &other){
		type = other.type;
	}
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Animal Sound!" << std::endl;
}

std::string Animal::getType() const {
	return type;
}