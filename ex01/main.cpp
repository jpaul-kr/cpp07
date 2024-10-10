#include "iter.hpp"

int	main()
{
	int	array[5] = {1, 2, 3, 4, 5};
	//char	array[5] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "old array: ";
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
	std::cout << "new array: ";
	iter(array, 5, iterate);
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;

}
