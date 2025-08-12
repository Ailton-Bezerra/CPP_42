/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:15:29 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/12 19:15:39 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other) {
	*this = other;
}

RPN& RPN::operator=(const RPN& other) {
	if (this != &other)
		this->_stack = other._stack;
	return (*this);
}

bool RPN::isOperator(const std::string& token) const {
	return (token == "+" || token == "-" || token == "/" || token == "*");
}

int RPN::applyOperation(const std::string& op, int a, int b) const {
	if (op == "+")
		return (a + b);
	else if (op == "-")
                return (a - b);
	else if (op == "*")
                return (a * b);
	else if (op == "/") {
		if (b == 0)
			throw (std::runtime_error("division by zero"));
                return (a / b);
	}
	throw (std::runtime_error("invalid operator"));
}

int RPN::evaluate(const std::string& expression) {
	if (expression.empty())
		throw (std::runtime_error("empty expression"));
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token) {
		if (token.size() == 1 && std::isdigit(token[0]))
				this->_stack.push(token[0] - '0');
		else if (isOperator(token)) {
			if (_stack.size() < 2)
				throw (std::runtime_error("invalid expression"));
			int b = this->_stack.top();
			this->_stack.pop();
			int a = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(applyOperation(token, a, b));
		}
		else
			throw (std::runtime_error("invalid expression"));
	}
	if (this->_stack.size() != 1)
		throw (std::runtime_error("missing operand"));
	return (this->_stack.top());
}
