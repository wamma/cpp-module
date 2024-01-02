#include "Span.hpp"

Span::Span(unsigned int n) : _n(n), _size(0), _arr(new int[n]) {}

Span::Span(const Span &copy) : _n(copy._n), _size(copy._size), _arr(new int[copy._n])
{
	for (unsigned int i = 0; i < copy._size; i++)
	{
		_arr[i] = copy._arr[i];
	}
}

Span::~Span()
{
	delete [] _arr;
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		delete [] _arr;
		_n = copy._n;
		_size = copy._size;
		_arr = new int[copy._n];
		for (unsigned int i = 0; i < copy._size; i++)
		{
			_arr[i] = copy._arr[i];
		}
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (_size >= _n)
	{
		throw std::out_of_range("Cannot add more numbers.");
	}
	_arr[_size++] = n;
}

int Span::shortestSpan()
{
	if (_size <= 1)
	{
		throw std::exception();
	}
	std::sort(_arr, _arr + _size);
	int min = _arr[1] - _arr[0];
	for (unsigned int i = 2; i < _size; i++)
	{
		if (_arr[i] - _arr[i - 1] < min)
		{
			min = _arr[i] - _arr[i - 1];
		}
	}
	return (min);
}

int Span::longestSpan()
{
	if (_size <= 1)
	{
		throw std::exception();
	}
	std::sort(_arr, _arr + _size);
	return (_arr[_size - 1] - _arr[0]);
}