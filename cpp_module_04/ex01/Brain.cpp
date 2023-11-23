#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain 기본 생성자 호출" << std::endl;
}

Brain::Brain(const Brain& other) {
	if (this != &other) {
		*this = other;
	}
	std::cout << "Brain Copy constructor called." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = other.ideas[i];
		}
	}
	std::cout << "Brain Copy assignment operator called." << std::endl;
	return *this;
}