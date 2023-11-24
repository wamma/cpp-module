#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain 기본 생성자 호출" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain Copy constructor called." << std::endl;
	if (this != &other) {
		*this = other;
	}
}

Brain::~Brain() {
	std::cout << "Brain Destructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "Brain Copy assignment operator called." << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

std::string Brain::getIdeas(int index) const {
	if (index >= 0 && index < 100) {
		return ideas[index];
	}
	return "";
}

void Brain::setIdeas(int index, const std::string& idea) {
	if (index >= 0 && index < 100) {
		ideas[index] = idea;
	}
}