#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base* generate(void)
{
	int random = rand() % 3;
	switch(random)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return (NULL);
}

void identify(Base* p) // dynamic_cast 실패시 NULL 반환
{
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "C" << std::endl;
	}

}

void identify(Base& p) // 참조 실패는 exception으로 처리
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast&)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast&)
		{
			(void)dynamic_cast<C&>(p);
			std::cout << "C" << std::endl;
		}
	}
}

int main()
{
	srand(time(NULL));
	// Base* base = generate();
	// Base &refBase = *base;
	// identify(refBase);

	Base* base = generate();
	identify(base);
}