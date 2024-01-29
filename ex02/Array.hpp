
#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>
#include <string>

template <typename T>
class Array {
	private:
		T *_array;
		int _size;

	public:
		Array();
		Array(unsigned int size);
		Array(const Array &other);
		~Array();
		Array &operator=(const Array &other);
		T& operator[](int index) const;
		unsigned int size();

	class OutOfBoundException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

};

template <typename T>
Array<T>::Array(){
	this->_array = new T;
	this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int size){
	this->_array = new T[size];
	this->_size = size;
}

template <typename T>
Array<T>::Array(const Array &other){
	this->_array = new T[other._size];
	this->_size = other._size;

	for(int i = 0; i < this->_size; i++)
	{
		this->_array[i] = other._array[i];
	}
}

template <typename T>
Array<T>::~Array(){
	delete [] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy){
	delete[] this->_array;

	this->_array = new T[copy._size];

	for(int i = 0; i < copy._size; i++)
	{
		this->_array[i] = copy._array[i];
	}
	return (*this);
}

template <typename T>
unsigned int Array<T>::size(){
	return this->_size;
}

template <typename T>
T& Array<T>::operator[](int index) const{
	if (index < 0 || index >= this->_size)
		throw OutOfBoundException();
	return this->_array[index];
}

template <typename T>
const char* Array<T>::OutOfBoundException::what() const throw()
{
	return ("Value out of bound.");
}

#endif
