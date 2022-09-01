/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 1 Task B

Compare three numbers and find the smallest.
*/
#include <iostream>
int main()
{
	int x, y, z;
	std::cout << "Enter the first number: ";
	std::cin >> x;
	std::cout << "Enter the second number: ";
	std::cin >> y;
	std::cout << "Enter the third number: ";
	std::cin >> z;
	
	int smallest;
	if(x < y)
	{
		smallest=x;
	} else {
		smallest=y;
	}
	if(smallest < z)
	{
		std::cout << "The smaller of the three is "+ std::to_string(smallest);
	} else {
		std::cout << "The smaller of the three is "+ std::to_string(z);
	}

	return 0;
}
