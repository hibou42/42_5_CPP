#include "Span.hpp"

Span::Span() {
	_maxSize = 0;
}
Span::Span(unsigned int N) : _maxSize(N) {}

Span::~Span() {}

Span::Span(Span const &cpy) {
	*this = cpy;
}

Span &Span::operator=(Span const &rhs) {
	if (this != &rhs){
		_numbers = rhs._numbers;
		_maxSize = rhs._maxSize;
	}
	return (*this);
}

const char *Span::ExecutorException::what() const throw() {
	return("Span overflow");
}

void Span::addNumber(unsigned int number) {
	if (_numbers.size() >= _maxSize) {
		throw std::out_of_range("Cannot add more numbers, Span is full");
	}
	_numbers.push_back(number);
}

void Span::addNumbers(const std::vector<int>& numbers) {
	if (numbers.size() + _numbers.size() > _maxSize) {
		throw std::out_of_range("Cannot add more numbers, Span will exceed its max size");
	}
	_numbers.insert(_numbers.end(), numbers.begin(), numbers.end());
}

int 	Span::maxVector() {
	if (_numbers.size() < 2) {
		throw std::logic_error("Not enough numbers to find maxVector");
	}
	int max = INT_MIN;
	for (int i = 0; _numbers[i]; i++) {
		if (max < _numbers[i])
			max = _numbers[i];
	}
	return (max);
}

int 	Span::minVector() {
	if (_numbers.size() < 2) {
		throw std::logic_error("Not enough numbers to find minVector");
	}
	int min = INT_MAX;
		for (int i = 0;_numbers[i]; i++) {
			if (min > _numbers[i])
				min = _numbers[i];
		}
	return (min);
}

int Span::shortestSpan() {
	if (_numbers.size() < 2) {
		throw std::logic_error("Not enough numbers to find a span");
	}

	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int shortest = INT_MAX;
	for (size_t i = 1; i < sorted.size(); ++i) {
		int span = sorted[i] - sorted[i - 1];
		if (span < shortest) {
			shortest = span;
		}
	}
	return shortest;
}

int	Span::longestSpan() {
	if (_numbers.size() < 2) {
		throw std::logic_error("Not enough numbers to find a span");
	}
	int max = maxVector();
	int min = minVector();
	return (max - min);
}