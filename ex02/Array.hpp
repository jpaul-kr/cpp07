#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

using std::string;

template <typename T>
class Array
{
	private:
		T*	array;
		int	len;
	public:
		Array() : len(0)
		{
			this->array = new T[0];
		}

		Array(unsigned int n) : len(n)
		{
			this->array = new T[n];
		}

		Array(const Array& cpy)
		{
			this->len = cpy.len;
			this->array = new T[cpy.len];
			for (int i = 0; i < cpy.len; i++)
				this->array[i] = cpy.array[i];
		}

		~Array()
		{
			delete [] this->array;
		}

		Array&	operator=(const Array& cpy)
		{
			if (this->array)
				delete [] this->array;
			this->array = new T[cpy.len];
			this->len = cpy.len;
			for (int i = 0; i < cpy.len; i++)
				this->array[i] = cpy.array[i];
			return *this;
		}

		T&	operator[](const int index)
		{
			if (index < 0 || index >= this->len)
				throw std::out_of_range("\tIndex out of bounds");
			return this->array[index];
		}

		int	size()
		{
			return (this->len);
		}
};

#endif
