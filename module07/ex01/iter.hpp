

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename A, typename F>
void iter(A* array, size_t len, F func) {
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

template <typename T>
void printElement(T element) {
	std::cout << element << std::endl;
}

#endif
