#include "iter.hpp"

int	main()
{
	int	array[5] = {1, 2, 3, 4, 5};
	//char	array[5] = {'a', 'b', 'c', 'd', 'e'};

	for (int i = 0; i < 5; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
	iter(array, 5, iterate<int>);
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;

}
