/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:59:23 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/12 15:59:29 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

template <typename T>
typename T::const_iterator  easyfind(const T& container, int tofind) {
	return (std::find(container.begin(), container.end(), tofind));
}
