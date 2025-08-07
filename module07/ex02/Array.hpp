


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
	public:
		Array(): _array(NULL), _size(0) {}

		Array(unsigned int n):_array(new T[n]), _size(n) {}

		Array(const Array& other): _array(new T[other._size]()), _size(other._size) {
			for (unsigned int i = 0; i < this->_size; i++)
				_array[i] = other._array[i];
		}

		Array& operator=(const Array& other) {
			if (this == &other)
				return (*this);
			if (this->_size != other._size) {
				delete[] this->_array;
				this->_array = new T[other._size];
				this->_size = other._size;
			}
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = other._array[i];
			return (*this);
		}

		~Array() { delete[] _array; }

		class outOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Array out of bounds");
				}
		};
		
		T& operator[](unsigned int index) {
			if (index >= this->_size)
				throw outOfBoundsException();
			return (this->_array[index]);
		}

		unsigned int size() { return (this->_size); }

	private:
		T* _array;
		unsigned int _size;

};

template <typename T>
std::ostream& operator<<(std::ostream& os, Array<T>& other) {
	for (unsigned int i = 0; i < other.size(); i++) {
		os << "[" << other[i] << "]";
	}
	return (os);
}

#endif
