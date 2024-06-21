#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {
private:
    T* m_array;
    unsigned int m_size;

public:
    Array();
    Array(unsigned int size);
    Array(const Array& other);
    ~Array();

    Array& operator=(const Array& other);
    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    unsigned int size() const;


    class OutOfBoundsException : public std::exception {
    public:
        virtual const char* what() const throw() { return "Index is out of bounds"; }
    };
};

template < typename T >
std::ostream& operator<<(std::ostream& out, const Array<T>& arr) {
	for (unsigned int i(0); i < arr.size(); i++)
		out << arr[i] << " ";
	return out;
}

#include "Array.tpp"

#endif
