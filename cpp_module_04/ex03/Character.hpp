#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		static const int _inventorySize = 4;
		AMateria* inventory[Character::_inventorySize];
		int numOfEquip;
		Character();

	public:
		Character(std::string name);
		Character(const Character& other);
		~Character();
		Character &operator=(const Character& other);

		std::string const& getName() const;
		void equip(int idx);
		void use(int idx, ICharacter& target);
};

#endif