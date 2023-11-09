#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &source);
		~Fixed();
		Fixed	&operator=(const Fixed &source);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif