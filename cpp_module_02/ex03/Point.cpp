#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float const x, float const y) : x(x), y(y) {}

Point::Point(Point const &source) : x(source.x), y(source.y) {}

Point::~Point() {}

Point &Point::operator=(const Point &source) {
	if (this == &source)
		return *this;
	return *this;
}

float Point::getX() const {
	return this->x.toFloat();
}

float Point::getY() const{
	return this->y.toFloat();
}
