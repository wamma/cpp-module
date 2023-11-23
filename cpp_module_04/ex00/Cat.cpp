#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	std::cout << "Cat 기본 생성자 호출." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	if (this != &other) {
		*this = other;
	}
	std::cout << "Cat Copy constructor called." << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout << "Cat Copy assignment operator called." << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow~" << std::endl;
}