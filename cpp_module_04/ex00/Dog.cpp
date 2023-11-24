#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog 기본 생성자 호출." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "Dog Copy constructor called." << std::endl;
	if (this != &other) {
		*this = other;
	}
}

Dog::~Dog() {
	std::cout << "Dog Destructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Copy assignment operator called." << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Bark!" << std::endl;
}