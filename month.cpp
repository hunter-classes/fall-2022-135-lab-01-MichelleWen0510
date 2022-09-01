/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 1 Task D

Given the month and the year, determine the amount of days in the month.
*/
#include <iostream>
int main()
{
	int year, month;
        std::cout << "Enter year: ";
        std::cin >> year;
	std::cout << "Enter month: ";
	std::cin >> month;

        if(month == 2 && year % 4 != 0)
        {
                std::cout << "29 days" << std::endl;
        } else if (month == 2 && year % 100 != 0)
        {
                std::cout << "28 days" << std::endl;
        } else if (month == 2 && year % 400 != 0)
        {
                std::cout << "29 days" << std::endl;
        } else if(month == 2){
                std::cout << "28 days" << std::endl;
        }

	if(month%2 == 1 && month<=7)
	{
		std::cout << "31 days" << std::endl;
	} else if (month%2 == 0 && month<=7 && month!=2){
		std::cout << "30 days" << std::endl;
	}
	
	if(month%2 == 1 && month>7)
	{
		std::cout << "30 days" << std::endl;
	} else if (month%2 == 0 && month>7){
		std::cout << "31 days" << std::endl;
	}

	return 0;
}
