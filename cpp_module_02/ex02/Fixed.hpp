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
		Fixed	operator+(const Fixed &source);
		Fixed	operator-(const Fixed &source);
		Fixed	operator*(const Fixed &source);
		Fixed	operator/(const Fixed &source);

		bool operator>(const Fixed &source);
		bool operator<(const Fixed &source);
		bool operator>=(const Fixed &source);
		bool operator<=(const Fixed &source);
		bool operator==(const Fixed &source);
		bool operator!=(const Fixed &source);

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &out, Fixed const &value);

#endif