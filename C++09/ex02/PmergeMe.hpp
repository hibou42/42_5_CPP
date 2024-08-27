#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <stdexcept>
#include <ctime>
#include <iomanip>

class PmergeMe {
private:
	std::vector<int> vec;
	std::deque<int> deq;

	template<typename Container>
	void mergeInsertSort(Container &container);

	template<typename Container>
	void merge(Container &container, Container &left, Container &right);

public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	PmergeMe &operator=(const PmergeMe &other);
	~PmergeMe();

	void sortAndMeasureTime();
	void addValue(int value);

	const std::vector<int> &getVector() const;
	const std::deque<int> &getDeque() const;
};

#endif
