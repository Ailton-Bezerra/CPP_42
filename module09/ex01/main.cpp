


#include "RPN.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "Error: expected 1 argument" << std::endl;
		return (1);
	}
	try {
		RPN rpn;
		int result = rpn.evaluate(argv[1]);
		std::cout << result << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
