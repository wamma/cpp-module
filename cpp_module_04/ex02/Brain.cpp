#include "Brain.hpp"

Brain::Brain() {}

Brain::Brain(const Brain& other) {
	if (this != &other) {
		*this = other;
	}
}

Brain::~Brain() {}

Brain& Brain::operator=(const Brain& other) {
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