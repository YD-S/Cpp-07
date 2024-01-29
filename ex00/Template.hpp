
#include <iostream>

template <typename T>
void swap(T &a, T &b){
	T swap;

	swap = a;
	a = b;
	b = swap;
}

template <typename T>
T min(T a, T b){
	if(a < b)
		return a;
	else
		return b;
}

template <typename T>
T max (T a, T b){
	if(a > b)
		return a;
	else
		return b;
}
