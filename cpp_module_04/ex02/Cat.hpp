#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* brain;

	public:
		Cat();
		Cat(const Cat& other);
		virtual ~Cat();
		Cat& operator=(const Cat& other);
		virtual void makeSound() const;
		std::string getIdea(int index) const;
		void setIdea(int index, const std::string& idea);
};

#endif