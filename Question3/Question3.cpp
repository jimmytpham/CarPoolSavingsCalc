#include <iostream>
#include <cmath>
#include <iomanip>

/* Jimmy Pham
*  T00629354
*  COMP 3141
*  Module 1 Question 3
*/

void carpool();

int main()
{
	carpool();

	return 0;

}
void carpool(){
		float miles, gallons, mpg, parking, tolls, total;

	std::cout << "How many miles do you drive per day?\n";
	std::cin >> miles;
	std::cout << "What is the cost per gallon of gasoline?\n";
	std::cin >> gallons;
	std::cout << "What is your average miles per gallon?\n";
	std::cin >> mpg;
	std::cout << "How much is parking fees per day?\n";
	std::cin >> parking;
	std::cout << "How much is the tolls per day (if any)?\n";
	std::cin >> tolls;

	total = (miles / mpg) * gallons + parking + tolls;

	std::cout << std::fixed << std::setprecision(2) << "Your total cost of driving per day is: $" << total;
}