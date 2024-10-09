#include "whatever.hpp"

int	main()
{
	int	i1 = 42;
	int	i2 = 67;
	/*float	f1 = 6.73f;
	float	f2 = 10.07f;
	char	c1 = 'a';
	char	c2 = 'a';*/

	std::cout << "i1 = " << i1 << " | i2 = " << i2 << " | " << "max: " << max(i1, i2) << std::endl;
	std::cout << "i1 = " << i1 << " | i2 = " << i2 << " | " << "min: " << min(i1, i2) << std::endl;
	swap(i1, i2);
	std::cout << "i1 = " << i1 << " | i2 = " << i2 << " | " << "max: " << max(i1, i2) << std::endl;
	std::cout << "i1 = " << i1 << " | i2 = " << i2 << " | " << "min: " << min<char>(i1, i2) << std::endl;
	std::cout << std::endl;

	/*std::cout << "f1 = " << f1 << " | f2 = " << f2 << " | " << "max: " << max(f1, f2) << std::endl;
	std::cout << "f1 = " << f1 << " | f2 = " << f2 << " | " << "min: " << min(f1, f2) << std::endl;
	swap(f1, f2);
	std::cout << "f1 = " << f1 << " | f2 = " << f2 << " | " << "max: " << max(f1, f2) << std::endl;
	std::cout << "f1 = " << f1 << " | f2 = " << f2 << " | " << "min: " << min<int>(f1, f2) << std::endl;
	std::cout << std::endl;

	std::cout << "c1 = " << c1 << " | c2 = " << c2 << " | " << "max: " << max(c1, c2) << std::endl;
	std::cout << "c1 = " << c1 << " | c2 = " << c2 << " | " << "min: " << min(c1, c2) << std::endl;
	swap(c1, c2);
	std::cout << "c1 = " << c1 << " | c2 = " << c2 << " | " << "max: " << max(c1, c2) << std::endl;
	std::cout << "c1 = " << c1 << " | c2 = " << c2 << " | " << "min: " << min<float>(c1, c2) << std::endl;*/

	/*int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;*/
}
