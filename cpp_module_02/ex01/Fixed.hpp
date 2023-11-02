#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					fixed_point_value;
		static const int	bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &src);
		~Fixed(void);
		Fixed	&operator=(const Fixed &rhs);
		Fixed	&operator<<(const Fixed )

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

#endif