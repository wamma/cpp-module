#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat 기본 생성자 호출." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "WrongCat 복사 생성자 호출." << std::endl;
	if (this != &other) {
		*this = other;
	}
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat 소멸자 호출." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "WrongCat 복사 할당 연산자 호출." << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat의 소리: Meow Meow" << std::endl;
}