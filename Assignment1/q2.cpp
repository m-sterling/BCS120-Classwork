/* Morgan Sterling
 * Assignment 1
 */

/* Question 2 - Write a complete C++ program to enter your name, your major, 
   and your hobbies from the keyboard and print them in separate lines */

#include <iostream>
using namespace std;

int main() {
	// declare three variables of type string
	string name, major, hobbies;
	// for each variable, prompt and assign input
	cout << "What is your name?" << endl;
	getline(cin, name);
	cout << "Great! What is your major?" << endl;
	getline(cin, major);
	cout << "Lastly, what are your hobbies?" << endl;
	getline(cin, hobbies);
	// show completed output with variables
	cout << "Okay! So you're " << name << "," << endl;
	cout << "  your major is " << major << ", and" << endl;
	cout << "  your hobbies are " << hobbies << "!" << endl;
}
