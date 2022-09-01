/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 1 Task C

Determine if a year is a leap year or common year.
*/
#include <iostream>
int main()
{
	int year;
	std::cout << "Enter year: ";
	std::cin >> year;
	
	if(year % 4 != 0)
	{
		std::cout << "Common Year" << std::endl;
	} else if (year % 100 != 0)
	{
		std::cout << "Leap Year" << std::endl;
	} else if (year % 400 != 0)
	{
		std::cout << "Common Year" << std::endl;	
	} else {
		std::cout << "Leap Year" << std::endl;
	}

	return 0;
}
