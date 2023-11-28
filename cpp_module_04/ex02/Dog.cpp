#include "Dog.hpp"

Dog::Dog() : AAnimal() {
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& other) : AAnimal(other){
	brain = new Brain(*other.brain); // 깊은 복사
	// brain = other.brain; // 얕은 복사
}

Dog::~Dog() {
	delete brain;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain); // 깊은 복사
		// brain = other.brain; // 얕은 복사
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Bark!" << std::endl;
}

std::string Dog::getIdea(int index) const {
	return brain->getIdeas(index);
}

void Dog::setIdea(int index, const std::string& idea) {
	brain->setIdeas(index, idea);
}