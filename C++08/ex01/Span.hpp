#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>
#include <iterator>
#include <climits>

class Span {
private:
	unsigned int _maxSize;
	std::vector<int> _numbers;
protected:

public:
	Span();
	Span(unsigned int N);
	Span(Span const &cpy);
	Span &operator=(Span const &rhs);
	~Span();

	void	addNumber(unsigned int number);
	void	addNumbers(const std::vector<int>& numbers);

	int 	shortestSpan();
	int 	longestSpan();

	int 	maxVector();
	int 	minVector();

	class	ExecutorException : public std::exception {
	public :
		virtual const char* what() const throw();
	};
};

#endif
