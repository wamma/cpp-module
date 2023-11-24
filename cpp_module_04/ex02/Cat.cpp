#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat 기본 생성자 호출." << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat Copy constructor called." << std::endl;
	brain = new Brain(*other.brain);
}

Cat::~Cat() {
	std::cout << "Cat Destructor called." << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Copy assignment operator called." << std::endl;
	if (this != &other) {
		type = other.type;
		brain = new Brain(*other.brain);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow~" << std::endl;
}

std::string Cat::getIdea(int index) const {
	return brain->getIdeas(index);
}

void Cat::setIdea(int index, const std::string& idea) {
	brain->setIdeas(index, idea);
}