#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

using std::string;

template<typename T, size_t L, typename F>
void	iter(T	(&arr)[L], size_t len, F func)
{
	for(size_t i = 0; i < len; i++)
		func(arr[i]);
}

template<typename T>
void	iterate(T& num)
{
	num++;
}

#endif
