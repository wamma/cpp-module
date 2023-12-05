#include "Animal.hpp"

Animal::Animal() : type("None") {
	std::cout << "Animal 기본 생성자 호출" << std::endl;
}

Animal::Animal(const Animal& other) {
	if (this != &other) {
		*this = other;
	}
	std::cout << "Animal 복사 생성자 호출." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal 소멸자 호출." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other){
		type = other.type;
	}
	std::cout << "Animal 복사 할당 연산자 호출." << std::endl;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Animal Sound!" << std::endl;
}

std::string Animal::getType() const {
	return type;
}