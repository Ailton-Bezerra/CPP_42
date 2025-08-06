

#include "iter.hpp"

int main() {
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	::iter(array, 9, printElement<int>);
	return (0);
}
