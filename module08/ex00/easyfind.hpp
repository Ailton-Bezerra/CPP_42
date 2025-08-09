

#include <iostream>
#include <algorithm>

template <typename T>
typename T::const_iterator  easyfind(const T& container, int tofind) {
	return (std::find(container.begin(), container.end(), tofind));
}

