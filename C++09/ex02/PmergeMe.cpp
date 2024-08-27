#include "PmergeMe.hpp"

// ============================================================================|
// Interaction fonctions
// ============================================================================|

// Ajouter une valeur dans les deux conteneurs
void PmergeMe::addValue(int value) {
	vec.push_back(value);
	deq.push_back(value);
}

// Méthode principale pour trier et mesurer le temps
void PmergeMe::sortAndMeasureTime() {
	// Mesurer le temps pour std::vector
	std::clock_t startVec = std::clock();
	mergeInsertSort(vec);
	std::clock_t endVec = std::clock();
	double durationVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC;

	// Mesurer le temps pour std::deque
	std::clock_t startDeq = std::clock();
	mergeInsertSort(deq);
	std::clock_t endDeq = std::clock();
	double durationDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC;

	// Afficher les résultats
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " 
				<< std::fixed << std::setprecision(6) << durationVec << " s" << std::endl;
	std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " 
				<< std::fixed << std::setprecision(6) << durationDeq << " s" << std::endl;
}

// Implémentation de l'algorithme merge-insert sort
template<typename Container>
void PmergeMe::mergeInsertSort(Container &container) {
	if (container.size() <= 1) return;

	typename Container::iterator mid = container.begin() + container.size() / 2;
	Container left(container.begin(), mid);
	Container right(mid, container.end());

	mergeInsertSort(left);
	mergeInsertSort(right);

	merge(container, left, right);
}

// Fonction pour fusionner les deux moitiés
template<typename Container>
void PmergeMe::merge(Container &container, Container &left, Container &right) {
	typename Container::iterator it = container.begin();
	typename Container::iterator leftIt = left.begin();
	typename Container::iterator rightIt = right.begin();

	while (leftIt != left.end() && rightIt != right.end()) {
		if (*leftIt < *rightIt) {
			*it++ = *leftIt++;
		} else {
			*it++ = *rightIt++;
		}
	}
	while (leftIt != left.end()) {
		*it++ = *leftIt++;
	}
	while (rightIt != right.end()) {
		*it++ = *rightIt++;
	}
}

// ============================================================================|
// Getter
// ============================================================================|

const std::vector<int>& PmergeMe::getVector() const {
	return vec;
}

const std::deque<int>& PmergeMe::getDeque() const {
	return deq;
}

// ============================================================================|
// Construction & destruction
// ============================================================================|

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) {
	*this = other;
}

PmergeMe::~PmergeMe() {}

// ============================================================================|
// Operator overload
// ============================================================================|

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
	if (this != &other) {
		this->vec = other.vec;
		this->deq = other.deq;
	}
	return *this;
}
