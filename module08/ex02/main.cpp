/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:00:24 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/12 17:12:38 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl;
	std::cout << "================ More tests ================" << std::endl;
	
	std::cout << "Atual stack:" << std::endl;
	it = mstack.begin();
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	
	std::cout << std::endl;
	std::cout << "Element at beginz\t(first):\t";
	MutantStack<int>::iterator begin = mstack.begin();
	std::cout << *begin << std::endl;

	std::cout << "Element at ++rbegin\t(second-last):\t";
	MutantStack<int>::reverse_iterator rbegin = mstack.rbegin();
	++rbegin;
	std::cout << *rbegin << std::endl;
	
	std::cout << "Element at end\t\t(last):\t\t";
	MutantStack<int>::iterator end = mstack.end();
	std::cout << *end << std::endl;
	
	std::cout << "Element at --rend\t(first):\t";
	MutantStack<int>::reverse_iterator rend = mstack.rend();
	std::cout << *(--rend) << std::endl;
	
	return (0);
}
