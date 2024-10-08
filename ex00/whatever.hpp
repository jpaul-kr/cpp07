#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

using std::string;

template <typename T>
void	swap(T& a, T& b)
{
	T	aux = a;

	a = b;
	b = aux;
}

template <typename T>
T	min(T a, T b)
{
	return (b <= a) ? b : a; 
}

template <typename T>
T	max(T a, T b)
{
	return (a > b) ? a : b; 
}

#endif
