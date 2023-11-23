#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "Dog";
	std::cout << "Dog 기본 생성자 호출." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other){
	if (this != &other) {
		*this = other;
	}
	std::cout << "Dog Copy constructor called." << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout << "Dog Copy assignment operator called." << std::endl;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Bark!" << std::endl;
}