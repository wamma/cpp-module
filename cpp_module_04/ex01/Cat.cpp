#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat 기본 생성자 호출." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	brain = new Brain(*other.brain);
	std::cout << "Cat Copy constructor called." << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat Destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		type = other.type;
		brain = new Brain(*other.brain);
	}
	std::cout << "Cat Copy assignment operator called." << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow~" << std::endl;
}