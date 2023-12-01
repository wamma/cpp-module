#ifndef AMateria_HPP
# define AMateria_HPP

# include <iostream>
# include "ICharacter.hpp"

class IChracter;

class AMateria
{
	protected:
		std::string _type;
		AMateria();

	public:
		AMateria(const AMateria &copy);
		virtual ~AMateria() = 0;
		AMateria &operator=(const AMateria &copy);

		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif