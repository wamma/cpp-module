#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat 기본 생성자 호출." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "WrongCat Copy constructor called." << std::endl;
	if (this != &other) {
		*this = other;
	}
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "WrongCat Copy assignment operator called." << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow~" << std::endl;
}