#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
	if (this != &other) {
		*this = other;
	}
}

Cat::~Cat() {}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow~" << std::endl;
}