/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:00:10 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/12 16:00:15 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	public:
		Span(unsigned int N);
		Span();
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int n);

		int shortestSpan();
		int longestSpan();
		
		template <typename InputIt>
		void addNumber(InputIt begin, InputIt end) {
			for (InputIt it = begin; it != end; ++it) {
				if (this->_numbers.size() >= this->_maxSize)
					throw std::runtime_error("Span is full");
				this->_numbers.push_back(*it);
			}
		}

	private:
		std::vector<int>	 _numbers;
		unsigned int		_maxSize;
};

#endif
