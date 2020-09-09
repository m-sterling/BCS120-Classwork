/* Morgan Sterling
 * Assignment 1
 */

/* Question 3 - Write a C++ program to calculate the following formula
   and print the value of variable result to the console screen. */

#include <iostream>
using namespace std;

int main() {
	// declare x and y with their given values, and sum and result with their default values
	int x = 100, y = 200, sum, result;
	// evaluate formula
	sum = (x * y) % y;
	sum = 400 + sum*x;
	result = sum;
	// output the result
	cout << "result = " << result << endl;

}
