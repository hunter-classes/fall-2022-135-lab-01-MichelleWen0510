/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 1 Task A

Find the smaller number of two inputs.
*/
#include <iostream>
int main()
{
	int x;
	int y;
	std::cout << "Enter the first number: ";
	std::cin >> x;
	std::cout << "Enter the second number: ";
	std::cin >> y;
	if (x < y)
	{
		std::cout << "The smaller of the two is "+ std::to_string(x) << std::endl;
	} else {
		std::cout << "The smaller of the two is "+ std::to_string(y) << std::endl;
	}
	return 0;
}

