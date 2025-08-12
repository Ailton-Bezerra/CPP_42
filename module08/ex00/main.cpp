/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:59:32 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/12 16:07:02 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main () {
	std::vector<int> vt;
	vt.push_back(10);
	vt.push_back(20);
	vt.push_back(30);

	int tofind = 10;
	std::vector<int>::const_iterator it;

	std::cout << "Vector values: ";
	std::cout << vt[0] << ", ";
	std::cout << vt[1] << ", ";
	std::cout << vt[2] << std::endl;

	it = easyfind(vt, tofind);

	while (it != vt.end()) {
	    std::cout << "Value " << tofind << " found!" << std::endl;
	    tofind += 10;
	    it = easyfind(vt, tofind);
	}
	std::cout << "Value " << tofind << " not found!" << std::endl;

	return (0);
}
