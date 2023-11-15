#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {
	Point a(0.0f, 0.0f);
	Point b(1.0f, 0.0f);
	Point c(0.0f, 1.0f);

	Point p(0.0f, 1.0f);

	bool checkInside = bsp(a, b, c, p);

	if (checkInside)
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is not inside the triangle" << std::endl;
	return 0;
}
