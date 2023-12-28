#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>

class Serialization
{
	private:
		Serialization(const Serialization &copy);
		Serialization &operator=(const Serialization &copy);

	public:
		Serialization();
		~Serialization();
		struct Data
		{
			std::string s1;
			int n;
			std::string s2;
		};
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};

#endif