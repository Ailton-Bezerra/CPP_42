/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:13:35 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/09 18:26:01 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>



class Point {
	private:
		const Fixed	_x;
		const Fixed	_y;
	
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& other);
		// não para fazer atribuição em constantes
		// const Point& operator=(const Point& other) = delete;
		~Point();

		const Fixed& getY(void) const;
		const Fixed& getX(void) const;
		
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif