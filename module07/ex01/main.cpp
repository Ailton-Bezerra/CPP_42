/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:35:14 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/07 18:41:12 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 ) { return; }
// 		int get( void ) const { return this->_n; }
// 	private:
// 		int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	::iter(array, 9, printElement<int>);
	
	// int tab[] = { 0, 1, 2, 3, 4 };
	// Awesome tab2[5];
	// ::iter( tab, 5, print<int> );
	// ::iter( tab2, 5, print<Awesome> );
	
	return (0);
}
