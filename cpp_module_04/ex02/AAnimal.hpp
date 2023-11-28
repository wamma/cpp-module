#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal& other);
		virtual ~AAnimal() = 0; // 순수 가상 소멸자를 선언함으로써 AAnimal을 추상 클래스로 만들어준다.
		AAnimal& operator=(const AAnimal& other);
		virtual void makeSound() const = 0; // makeSound도 순수 가상 함수로 만들어준다.
		std::string getType() const;
};

#endif