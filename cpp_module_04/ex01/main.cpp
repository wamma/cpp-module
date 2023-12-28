#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;

// 	return 0;
// }

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;

// 	const int size = 10;
// 	Animal* animals[size];

// 	for (int i = 0; i < size; ++i)
// 	{
// 		if (i < size / 2)
// 		{
// 			animals[i] = new Dog();
// 		}
// 		else
// 		{
// 			animals[i] = new Cat();
// 		}
// 	}

// 	for (int i = 0; i < size; ++i)
// 	{
// 		animals[i]->makeSound();
// 	}

// 	for (int i = 0; i < size; ++i)
// 	{
// 		delete animals[i];
// 	}

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