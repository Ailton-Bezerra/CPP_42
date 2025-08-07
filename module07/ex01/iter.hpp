/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:31:40 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/07 18:36:30 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
