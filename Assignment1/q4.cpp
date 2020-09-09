/* Morgan Sterling
 * Assignment 1
 */

/* Question 4 - Write a C++ program to print the value of a, b, and c after each statement */

#include <iostream>
using namespace std;

int main() {
	// declare a and b with their given values, and c with the default value
	int a = 7, b = 2, c;
	// before and after every statement, output the values of a/b/c
	cout << "a = " << a << "  b = " << b << "  c = " << c << endl;
	a = ++b + 5;
	cout << "a = " << a << "  b = " << b << "  c = " << c << endl;
	c = a + b-- + 1;
	cout << "a = " << a << "  b = " << b << "  c = " << c << endl;
	b = (a++) - (--c);
	// final result
	cout << "a = " << a << "  b = " << b << "  c = " << c << endl;
}
