#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"

class Amateria : public IMateriaSource
{
	protected:
		std::string _type;
		Amateria();

	public:
		Amateria(const Amateria &copy);
		virtual ~Amateria();
		Amateria &operator=(const Amateria &copy);

		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif