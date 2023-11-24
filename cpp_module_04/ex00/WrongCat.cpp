#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	type = "WrongCat";
	std::cout << "WrongCat 기본 생성자 호출." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	if (this != &other) {
		*this = other;
	}
	std::cout << "WrongCat Copy constructor called." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		type = other.type;
	}
	std::cout << "WrongCat Copy assignment operator called." << std::endl;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow~" << std::endl;
}