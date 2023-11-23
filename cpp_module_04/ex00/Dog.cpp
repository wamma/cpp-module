#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other){
	if (this != &other) {
		*this = other;
	}
}

Dog::~Dog() {}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Bark!" << std::endl;
}