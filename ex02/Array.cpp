#include "Array.hpp"

Array::Array() : len(0)
{
	this->array = new [];
}

Array::Array(unsigned int n) : len(n)
{
	this->array = new [n];
}

Array::Array(const Array& cpy)
{
	this->array = new T[cpy.len];
	for (int i = 0; i < cpy.len; i++)
		this->array[i] = cpy.array[i];
}

Array::~Array()
{
	delete [] this->array;
}

Array&	operator=(const Array& cpy)
{
	*this = Array(cpy);
	return *this;
}

T&	operator[](const int index)
{
	if (index < 0 || index >= this->len)
		throw std::out_of_range;
	return this->array[index];
}

size_t	size()
{
	return this->len;
}
