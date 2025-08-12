/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:15:20 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/12 19:15:23 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <stdexcept>
#include <sstream>

class RPN {
	public:
		RPN();
		RPN(const RPN& other);
		~RPN();
		RPN& operator=(const RPN& other);

		int evaluate(const std::string& exoression);

	private:
		std::stack<int> _stack;
		bool isOperator(const std::string& token) const;
		int applyOperation(const std::string& op, int a, int b) const;

};

#endif
