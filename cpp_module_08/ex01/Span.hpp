#pragma once

#include <iostream>
#include <exception>
#include <algorithm>

class Span
{
	private:
		unsigned int _n;
		unsigned int _size;
		int *_arr;
		Span();

	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span();
		Span &operator=(const Span &copy);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
};