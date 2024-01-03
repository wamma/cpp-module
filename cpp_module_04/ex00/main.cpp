#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	const WrongAnimal* wrongAnimal = new WrongAnimal();
// 	const WrongAnimal* wrongCat = new WrongCat();

// 	std::cout << "wrongCat's type: " << wrongCat->getType() << std::endl;
// 	wrongCat->makeSound(); // virtual 키워드가 없으니 wrongCat클래스 멤버 함수가 아닌 wrongAnimal클래스 멤버 함수 호출됨

// 	delete meta;
// 	delete j;
// 	delete i;
// 	delete wrongAnimal;
// 	delete wrongCat;

// 	return 0;
// }

// int main()
// {
// 	const WrongAnimal* wrongAnimal = new WrongAnimal();
// 	const WrongAnimal* wrongCat = new WrongCat();

// 	std::cout << "wrongCat's type: " << wrongCat->getType() << std::endl;
// 	wrongCat->makeSound();

// 	delete wrongAnimal;
// 	delete wrongCat;

// 	return 0;
// }

int main()
{
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongCat* wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	return 0;
}

// int main()
// {
// 	WrongAnimal* wrongAnimal = new WrongCat();

// 	wrongAnimal->makeSound();
// 	return 0;
// }