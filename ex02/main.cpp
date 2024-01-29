#include <iostream>
#include "Array.hpp"

int main()
{
	try
	{
		Array<int> data;
		Array<int> data_1(5);
		Array<int> data_2(data_1);
		Array<int> data_3;
		data_3 = data_2;

		data_1[0] = 3;
		data_1[4] = 2;

		std::cout << "size: " <<data_1.size() << std::endl;
		for (unsigned int i = 0; i < data_1.size(); i++)
		{
			std::cout << "array position " << i << ": " << data_1[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


}


//
//#define MAX_VAL 750
//int main(int, char**)
//{
//	Array<int> numbers(MAX_VAL);
//	int* mirror = new int[MAX_VAL];
//	srand(time(NULL));
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		const int value = rand();
//		numbers[i] = value;
//		mirror[i] = value;
//	}
//	//SCOPE
//	{
//		Array<int> tmp = numbers;
//		Array<int> test(tmp);
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		if (mirror[i] != numbers[i])
//		{
//			std::cerr << "didn't save the same value!!" << std::endl;
//			return 1;
//		}
//	}
//	try
//	{
//		numbers[-2] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//	try
//	{
//		numbers[MAX_VAL] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		numbers[i] = rand();
//	}
//	delete [] mirror;//
//	return 0;
//}
