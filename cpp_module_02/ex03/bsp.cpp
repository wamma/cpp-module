#include "Point.hpp"

Fixed sign(Point const a, Point const b, Point const c) {
	return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed alpha, beta, gamma;

	alpha = sign(point, a, b);
	beta = sign(point, b, c);
	gamma = sign(point, c, a);
	return ((alpha >= 0 && beta >= 0 && gamma >= 0) || (alpha <= 0 && beta <= 0 && gamma <= 0));
}
