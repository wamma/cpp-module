#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {
	Point a(0.0f, 0.0f);	  // 삼각형의 꼭짓점 A
	Point b(1.0f, 0.0f);  // 삼각형의 꼭짓점 B
	Point c(0.0f, 1.0f);  // 삼각형의 꼭짓점 C

	Point p(0.0f, 0.5f);

	bool checkInside = bsp(a, b, c, p);

	if (checkInside)
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is not inside the triangle" << std::endl;
	return 0;
}
