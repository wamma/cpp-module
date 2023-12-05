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
		AMateria(std::string const& type);
		virtual ~AMateria() = 0;
		AMateria(const AMateria& other);
		AMateria &operator=(const AMateria &other);

		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif