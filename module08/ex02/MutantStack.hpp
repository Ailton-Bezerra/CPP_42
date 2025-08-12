/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:00:36 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/12 16:00:54 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template < typename T, typename C = std::deque<T> >
class MutantStack: public std::stack<T, C> {
	public:
		typedef typename std::stack<T, C>::container_type::iterator iterator;
		typedef typename std::stack<T, C>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, C>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, C>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack<T, C>() {};
		MutantStack<T, C>(const MutantStack<T, C>& other): std::stack<T, C>(other) {};
		~MutantStack<T, C>() {};
		MutantStack& operator=(const MutantStack<T,C>& other) {
				if (this != &other)
					this->c = other.c;
				return (*this);
		}
		
		MutantStack<T, C>::iterator begin() {return (this->c.begin());}
		MutantStack<T, C>::iterator end() {return (this->c.end());}
		MutantStack<T, C>::const_iterator begin() const {return (this->c.begin());}
		MutantStack<T, C>::const_iterator end() const {return (this->c.end());}
		MutantStack<T, C>::reverse_iterator rbegin() {return (this->c.rbegin());}
		MutantStack<T, C>::reverse_iterator rend() {return (this->c.rend());}
		MutantStack<T, C>::const_reverse_iterator rbegin() const {return (this->c.rbegin());}
		MutantStack<T, C>::const_reverse_iterator rend() const {return (this->c.rend());}
};

#endif
