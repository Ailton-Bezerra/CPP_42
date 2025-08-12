/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:16:03 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/12 19:16:06 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) { *this = other; }

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {
		this->_vec = other._vec;
		this->_deq = other._deq;
	}
	return (*this);
}

void PmergeMe::processInput(int argc, char** argv) {
	std::set<int> numbers;

	for (int i = 1; i < argc; i++) {
		std::string input = argv[i];
		std::istringstream iss(input);
		int value;

		iss >> value;
		if (iss.fail() || !iss.eof() || value < 0)
			throw (std::runtime_error("invalid input: " + input));
		if (numbers.count(value) == 1)
			throw (std::runtime_error("duplicated value: " + input));

		numbers.insert(value);
		this->_vec.push_back(value);
		this->_deq.push_back(value);
	}
}

void PmergeMe::sortVector() {
	std::cout << "Before:\t";
	printContainer(this->_vec);

	std::clock_t start = clock();
	std::vector<int> sorted = insertMergeSort<std::vector<int> >(this->_vec);
	std::clock_t finish = clock();

	if (!isSorted<std::vector<int> >(sorted))
			throw (std::runtime_error("sorting vectir failed!"));
	
	std::cout << "After:\t";
	printContainer(sorted);

	double	elapsedTime = static_cast<double>(finish - start) * 1000000 / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : "
			  << std::setprecision(5) << elapsedTime << " us" << std::endl;
}

void	PmergeMe::sortDeque(void) {
	std::clock_t	start = clock();
	std::deque<int>	sorted = insertMergeSort<std::deque<int> >(_deq);
	std::clock_t	finish = clock();

	if (!isSorted<std::deque<int> >(sorted))
		throw (std::runtime_error("sorting deque failed"));

	double	elapsedTime = static_cast<double>(finish - start) * 1000000 / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque  : "
			  << std::setprecision(5) << elapsedTime << " us" << std::endl;
}

std::vector<int> generateInsertionSeq(size_t n) {
	std::vector<int> seq;
	std::set<int> seen;

	for (int j = 2; seq.size() < n; ++j) {
		int num = jacobSthal(j);
		if (num > static_cast<int>(n))
			num = static_cast<int>(n);
		while (num > 0 && !seen.count(num)) {
			seq.push_back(num);
			seen.insert(num);
			--num;
		}
	}
	return (seq);
}

int jacobSthal(int n) {
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (jacobSthal(n - 1) + 2 * jacobSthal(n - 2));
}
