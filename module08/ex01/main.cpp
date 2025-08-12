/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:59:40 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/12 16:40:45 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main () {
	std::cout << "Testing addNumber" << std::endl;
	std::cout << "Span numbers: 6 3 17 9 11" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "shortestSpan: ";
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan: ";
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
	
	std::cout << "Testing improved addNumber" << std::endl;
	std::cout << "Span numbers: 10 13 20" << std::endl;
	Span sp2 = Span(3);
	
	int arr[] = {10, 13, 20};
	sp2.addNumber(arr, arr + 3);

	std::cout << "shortestSpan: ";
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << "longestSpan: ";
	std::cout << sp2.longestSpan() << std::endl;
	
	return 0;
}
