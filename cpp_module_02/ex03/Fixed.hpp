#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _fixedPointValue;
		static const int bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &source);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();

		Fixed	&operator=(const Fixed &source);
		Fixed	operator-(const Fixed &source) const;
		Fixed	operator*(const Fixed &source) const;

		bool operator>(const Fixed &source) const;
		bool operator<(const Fixed &source) const;

		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream& operator<<(std::ostream &out, Fixed const &value);

#endif