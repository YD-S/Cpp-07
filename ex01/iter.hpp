#include <iostream>
#include <string>

template <typename T>
void iter(T *a, int b, void (*func)(T &array)){
	for (int i = 0; i < b; i++) {
		func(a[i]);
	}
}

template <typename T>

void    sum_1(T &num)
{
	num += 1;
}
