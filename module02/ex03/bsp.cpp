/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:21:10 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/09 18:32:12 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// #include <cmath> // posso utilizar o roudf dessa lib
static float area(int x1, int y1, int x2, int y2, int x3, int y3) {
	float result = (x1 * (y2 - y3) + x2 *(y3 - y1) + x3 * (y1 - y2)) / 2.0;
	return (result < 0) ? -result : result;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float areaABC = area(
		a.getX().toInt(), a.getY().toInt(),
		b.getX().toInt(), b.getY().toInt(),
		c.getX().toInt(), c.getY().toInt()
	);

	float areaPBC = area(
		point.getX().toInt(), point.getY().toInt(),
		b.getX().toInt(), b.getY().toInt(),
		c.getX().toInt(), c.getY().toInt()
	);
	
	float areaPAB = area(
		point.getX().toInt(), point.getY().toInt(),
		a.getX().toInt(), a.getY().toInt(),
		b.getX().toInt(), b.getY().toInt()
	);

	float areaPAC = area(
		point.getX().toInt(), point.getY().toInt(),
		a.getX().toInt(), a.getY().toInt(),
		c.getX().toInt(), c.getY().toInt()
	);

	return (areaABC == (areaPBC + areaPAB + areaPAC));
}