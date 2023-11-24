#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

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

// 	return 0;
// }

int main()
{
	Dog* originalDog = new Dog();
	originalDog->setIdea(0, "original idea");
	Dog* copiedDog = new Dog(*originalDog);
	copiedDog->setIdea(0, "copied idea");

	std::cout << "Original Dog's idea: " << originalDog->getIdea(0) << std::endl;
	std::cout << "copiedDog Dog's idea: " << copiedDog->getIdea(0) << std::endl;

	delete originalDog;
	delete copiedDog;

	return 0;
}
