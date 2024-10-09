#include "Array.hpp"

int main()
{
	Array<int>	arr1(5);
	//Array<int>	arr2(5);
	Array<char>	arr2(5);

	for (int i = 0; i < arr2.size(); i++)
		arr2[i] = i + 'a';
	for (int i = 0; i < arr1.size(); i++)
		arr1[i] = i * 2;

	//arr1 = arr2;
	//Array<int>	arr2(arr1);
	//arr2[0] = -5;

	/*try
	{
		arr2[arr2.size()] = 34;
	}
	catch (std::out_of_range& e)
	{
		std::cout << e.what() << std::endl;
	}*/

	for (int i = 0; i < arr1.size(); i++)
		std::cout << arr1[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << " ";
	std::cout << std::endl;
}
