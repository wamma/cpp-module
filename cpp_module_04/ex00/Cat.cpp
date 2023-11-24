#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat 기본 생성자 호출." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat Copy constructor called." << std::endl;
	if (this != &other) {
		*this = other;
	}
}

Cat::~Cat() {
	std::cout << "Cat Destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Copy assignment operator called." << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow~" << std::endl;
}