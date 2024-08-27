#include "RPN.hpp"

// ============================================================================|
// Interaction fonctions
// ============================================================================|

bool RPN::isOperator(char c) const {
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

int RPN::applyOperation(int a, int b, char op) const {
	switch (op) {
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': 
			if (b == 0) {
				throw std::runtime_error("Error: division by zero");
			}
			return a / b;
		default: 
			throw std::runtime_error("Error: invalid operator");
	}
}

int RPN::evaluateExpression(const std::string &expression) {
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token) {
		if (token.length() == 1 && isOperator(token[0])) {
			// Si c'est un opérateur, appliquez l'opération
			if (stack.size() < 2) {
				throw std::runtime_error("Error: invalid expression");
			}
			int b = stack.top(); stack.pop();
			int a = stack.top(); stack.pop();
			int result = applyOperation(a, b, token[0]);
			stack.push(result);
		} else {
			// Sinon, c'est un nombre
			std::stringstream ss(token);
			int operand;
			ss >> operand;
			if (ss.fail()) {
				throw std::runtime_error("Error: invalid operand");
			}
			stack.push(operand);
		}
	}
	// À la fin, il doit rester un seul élément dans la pile
	if (stack.size() != 1) {
		throw std::runtime_error("Error: invalid expression");
	}

	return stack.top();
	}


// ============================================================================|
// Construction & destruction
// ============================================================================|

RPN::RPN() {}

RPN::RPN(const RPN &other) {
	*this = other;
}

RPN::~RPN() {}

// ============================================================================|
// Operator overload
// ============================================================================|

RPN &RPN::operator=(const RPN &other) {
	if (this != &other) {
		this->stack = other.stack;
	}
	return *this;
}