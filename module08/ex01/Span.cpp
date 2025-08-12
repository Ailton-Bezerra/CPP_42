


#include "Span.hpp"


Span::Span(): _numbers(), _maxSize(0) {}
Span::~Span() {}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		this->_numbers.clear();
		this->_numbers.insert(this->_numbers.end(), other._numbers.begin(), other._numbers.end());
		this->_maxSize = other._maxSize;
	}
	return (*this);
}

Span::Span(unsigned int N): _numbers(), _maxSize(N) {}

Span::Span(const Span& other): _numbers(other._numbers), _maxSize(other._maxSize) {}




void Span::addNumber(int n) {
	if (this->_numbers.size() >= this->_maxSize)
		throw std::runtime_error("Span is full");
	this->_numbers.push_back(n);
}

int Span::longestSpan() {
	if (this->_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers");
	int min = *std::min_element(this->_numbers.begin(), this->_numbers.end());
	int max = *std::max_element(this->_numbers.begin(), this->_numbers.end());

	return (max - min);
}

int Span::shortestSpan() {
	if (this->_numbers.size() < 2)
		throw std::runtime_error("Not enough numbers");

	std::vector<int> sorted(this->_numbers);
	std::sort(sorted.begin(), sorted.end());

	int shortspan = sorted[1] - sorted[0];
	for (size_t i = 2; i < sorted.size(); ++i) {
		int temp = (sorted[i] - sorted[i - 1]);
		if (temp < shortspan)
			shortspan = temp;
	}
	return (shortspan);
}


