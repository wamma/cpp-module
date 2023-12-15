#ifndef FLOOR_HPP
# define FLOOR_HPP

# include "AMateria.hpp"

class Floor
{
	private:
		static const int slotcount = 4;
		AMateria *slots[slotcount];
		Floor(const Floor &other);
		Floor &operator=(const Floor &other);

	public:
		Floor();
		~Floor();
		void dropAmateria(int slotNumber);
		void addItem(AMateria *item);
};

#endif