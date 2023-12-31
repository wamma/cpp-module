#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <cmath>

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &source);
		Point &operator=(const Point &source);
		~Point();

		float getX() const;
		float getY() const;
};

// Fixed sign(Point const a, Point const b, Point const c);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif