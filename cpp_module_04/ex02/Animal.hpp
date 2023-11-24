#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal& other);
		virtual ~Animal() = 0;
		Animal& operator=(const Animal& other);
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif