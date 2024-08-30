
/* 
Title: Chapter2Ex2
File Name: Chapter2Ex2_Katlyn_Winkelhake.cpp
Programmer: Katlyn Winkelhake
Date: Aug 30 2024
Requirements: Write a program that will predict how much the division will generate if the company has $8.6 million in sales this year.
*/


#include <iostream>
using namespace std;
const double tax = .07;


int main()
{

	double cost = 10.00;
	double cost2 = 11.00;

	double totalCost = tax * cost + cost;
	double totalCost2 = tax * cost2 + cost2;
	cout << "Your total cost is " << totalCost<<endl;
	cout << "Your total cost is " << totalCost2<<endl;
	//totalCost = cost * (tax + 1)
	


   return 0;
}
