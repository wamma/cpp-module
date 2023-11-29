#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		int _xp;

	public:
		Ice();
		Ice(const Ice& other);
		virtual ~Ice();
		Ice& operator=(const Ice& other);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
