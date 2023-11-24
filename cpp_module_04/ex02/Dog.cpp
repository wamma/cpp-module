#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog 기본 생성자 호출." << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "Dog Copy constructor called." << std::endl;
	brain = new Brain(*other.brain); // 깊은 복사
	// brain = other.brain; // 얕은 복사
}

Dog::~Dog() {
	std::cout << "Dog Destructor called." << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Copy assignment operator called." << std::endl;
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