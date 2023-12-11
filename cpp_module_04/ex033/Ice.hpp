#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string type;
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		std::string const& getType() const;
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif