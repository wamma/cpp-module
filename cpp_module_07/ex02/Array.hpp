#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T* _array;
		int _size;

	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &other);
		Array &operator=(const Array &other);
		T& operator[](const int index);
		const T& operator[](const int index) const;
		unsigned int size() const;
};

#include "Array.tpp"

#endif