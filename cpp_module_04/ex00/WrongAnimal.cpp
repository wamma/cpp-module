#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("None") {
	std::cout << "WrongAnimal 기본 생성자 호출" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "WrongAnimal 복사 생성자 호출." << std::endl;
	if (this != &other) {
		*this = other;
	}
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal 소멸자 호출." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal 복사 할당 연산자 호출." << std::endl;
	if (this != &other){
		type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal Sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}