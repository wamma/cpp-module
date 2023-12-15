#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain 기본 생성자 호출" << std::endl;
	for (int i = 0; i < 100; ++i) {
		ideas[i] = "ideas";
	}
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain 복사 생성자 호출." << std::endl;
	if (this != &other) {
		*this = other;
	}
}

Brain::~Brain() {
	std::cout << "Brain 소멸자 호출." << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "Brain 복사 할당 연산자 호출." << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

std::string Brain::getIdeas(int index) const {
	if (index >= 0 && index < 100) {
		return ideas[index];
	}
	std::cerr << "Error: " << index << " is out of range." << std::endl;
	return ""; // 함수를 호출하는 쪽에서 잘못된 인덱스로 접근했음을 알리기 위해 빈 문자열을 반환한다.
}

void Brain::setIdeas(int index, const std::string& idea) {
	if (index >= 0 && index < 100) {
		ideas[index] = idea;
	}
}