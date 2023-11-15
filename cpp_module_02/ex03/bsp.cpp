#include "Point.hpp"

Fixed sign(Point const p, Point const a, Point const b) {
	return (p.getX() - b.getX()) * (a.getY() - b.getY()) - (a.getX() - b.getX()) * (p.getY() - b.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed alpha, beta, gamma;

	alpha = sign(point, a, b);
	beta = sign(point, b, c);
	gamma = sign(point, c, a);
	return ((alpha >= 0 && beta >= 0 && gamma >= 0) || (alpha <= 0 && beta <= 0 && gamma <= 0));
}
