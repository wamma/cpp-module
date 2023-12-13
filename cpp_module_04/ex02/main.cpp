#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	// AAnimal animal; // AAnimal 클래스는 추상 클래스로 선언되어 있어 객체 직접 생성 못함

	return 0;
}

// int main()
// {
// 	Dog* originalDog = new Dog();
// 	originalDog->setIdea(0, "original idea");
// 	Dog* copiedDog = new Dog(*originalDog);
// 	copiedDog->setIdea(0, "copied idea");

// 	std::cout << "Original Dog's idea: " << originalDog->getIdea(0) << std::endl;
// 	std::cout << "copiedDog Dog's idea: " << copiedDog->getIdea(0) << std::endl;

// 	delete originalDog;
// 	delete copiedDog;

// 	return 0;
// }
