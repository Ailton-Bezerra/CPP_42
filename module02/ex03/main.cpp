/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:53:30 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/16 13:07:50 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

int main()
{
	Point A(0, 0);
	Point B(10, 30);
	Point C(20, 0);

	Point P(15, 10);
	
	// Point A(0, 0);
	// Point B(4, 0);
	// Point C(2, 4);

	// Point P(2, 0); // <-- sobre a aresta AB
	
	if (bsp(A, B, C, P))
		std::cout << "Inside\n";
	else
		std::cout << "Outside\n";

	return (0);
}