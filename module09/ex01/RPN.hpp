

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
