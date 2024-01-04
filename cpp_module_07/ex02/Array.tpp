template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array &other) : _array(new T[other._size]), _size(other._size)
{
	for (int i = 0; i < _size; i++)
	{
		_array[i] = other._array[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] _array;
		_size = other._size;
		_array = new T[_size];
		for (int i = 0; i < _size; i++)
		{
			_array[i] = other._array[i];
		}
	}
	return *this;
}

// const 없는 operator[]
template <typename T>
T& Array<T>::operator[](const int index)
{
	if (index < 0 || index >= _size)
	{
		throw std::exception();
	}
	return _array[index];
}

// const 있는 operator[]
template <typename T>
const T& Array<T>::operator[](const int index) const
{
	if (index < 0 || index >= _size)
	{
		throw std::exception();
	}
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}