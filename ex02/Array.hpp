#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

using std::string;

template <typename T>
class Array
{
	private:
		T*	array;
		size_t	len;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array&	operator=(const Array& cpy);
		T&	operator[](const int index);

		size_t	size();
};

#endif
