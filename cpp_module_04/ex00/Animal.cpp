#include "Animal.hpp"

Animal::Animal() : type("None") {}

Animal::Animal(const Animal& other) {
	if (this != &other) {
		*this = other;
	}
}

Animal::~Animal() {}

Animal& Animal::operator=(const Animal& other) {
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