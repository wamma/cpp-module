#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Floor.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
		Floor floor;
		Character();

	public:
		Character(std::string const &name);
		virtual ~Character();
		Character(const Character &other);
		Character &operator=(const Character &other);
		virtual std::string const &getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
		AMateria* getMateriaType(int index) const;
};

#endif
