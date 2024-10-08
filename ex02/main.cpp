#include "Array.hpp"

int main()
{
	Array<int>	arr1(5);
	//Array<int>	arr2(3);
	Array<char>	arr2(5);

	for (int i = 0; i < arr2.size(); i++)
		arr2[i] = i + 'a';
	for (int i = 0; i < arr1.size(); i++)
		arr1[i] = i * 2;

	//arr1 = arr2;
	//Array<int>	arr2(arr1);

	for (int i = 0; i < arr1.size(); i++)
		std::cout << arr1[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << " ";
	std::cout << std::endl;
}
