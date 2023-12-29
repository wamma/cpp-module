#pragma once

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T const &min(T const& a, T const& b)
{
	if (b <= a)
	{
		return b;
	}
	else
	{
		return a;
	}
	// return (b <= a) ? b : a;
}

template <typename T>
T const &max(T const& a, T const& b)
{
	if (b <= a)
	{
		return a;
	}
	else
	{
		return b;
	}
	// return (a > b) ? a : b;
}