#include "Cat.hpp"

Cat::Cat() : AAnimal() {
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other) {
	brain = new Brain(*other.brain);
}

Cat::~Cat() {
	delete brain;
}

Cat& Cat::operator=(const Cat& other) {
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