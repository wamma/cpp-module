#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string type;
	public:
		Cure();
		Cure(const Cure& other);
		virtual ~Cure();
		Cure& operator=(const Cure& other);
		std::string const& getType() const;
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif