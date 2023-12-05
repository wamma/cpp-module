#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
		AMateria();
	
	public:
		AMateria(std::string const& type);
		AMateria(const AMateria& other);
		virtual ~AMateria();
		AMateria& operator=(const AMateria& other);
		const std::string& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif