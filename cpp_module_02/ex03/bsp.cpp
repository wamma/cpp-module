#include "Point.hpp"

struct Vec
{
	float x;
	float y;
};

// Fixed sign(Point const a, Point const b, Point const c) {
// 	return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
// }

float sign(const Vec& a, const Vec& b) {
	double cross;

	cross = (a.x * b.y) - (a.y * b.x);
	return (cross);
}

Vec getVector(Point const a, Point const b)
{
	Vec vec;

	vec.x = b.getX() - a.getX();
	vec.y = b.getY() - a.getY();
	return (vec);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	// Fixed alpha, beta, gamma;

	// alpha = sign(point, a, b);
	// beta = sign(point, b, c);
	// gamma = sign(point, c, a);

	// if ((alpha > 0 && beta > 0 && gamma > 0) || (alpha < 0 && beta < 0 && gamma < 0))
	// 	return true;
	// else
	// 	return false;

	Vec vecAB = getVector(a, b);
	Vec vecBC = getVector(b, c);
	Vec vecCA = getVector(c, a);
	Vec vecAP = getVector(a, point);
	Vec vecBP = getVector(b, point);
	Vec vecCP = getVector(c, point);

	float alpha = sign(vecAP, vecAB);
	float beta = sign(vecBP, vecBC);
	float gamma = sign(vecCP, vecCA);
	if ((alpha > 0 && beta > 0 && gamma > 0) || (alpha < 0 && beta < 0 && gamma < 0))
		return true;
	else
		return false;
}
