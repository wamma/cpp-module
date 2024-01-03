#include "whatever.hpp"
#include <iostream>

// int main()
// {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }

class Point {
	public:
		int x, y;

		Point(int x, int y) : x(x), y(y) {}

		bool operator<=(const Point& other) const {
			return x * x + y * y <= other.x * other.x + other.y * other.y;
		}
};

std::ostream& operator<<(std::ostream& os, const Point& p) {
	os << "(" << p.x << ", " << p.y << ")";
	return os;
}

int main() {
	float e = 1.5f, f = 2.5f;
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min(e, f) << std::endl;
	std::cout << "max( e, f ) = " << ::max(e, f) << std::endl;

	char g = 'g', h = 'h';
	::swap(g, h);
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min(g, h) << std::endl;
	std::cout << "max( g, h ) = " << ::max(g, h) << std::endl;

	Point p1(1, 2), p2(3, 4);
	::swap(p1, p2);
	std::cout << "p1 = " << p1 << ", p2 = " << p2 << std::endl;
	std::cout << "min( p1, p2 ) = " << ::min(p1, p2) << std::endl;
	std::cout << "max( p1, p2 ) = " << ::max(p1, p2) << std::endl;

	return 0;
}
