/**
 * Demo program for mat exercise.
 * 
 * Author: Tal Zichlinsky
 * Since : 2022-01
 */


#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	cout << "aaa" << endl;

	cout << "bbb" << endl; 

	try {
		cout << "cccc" << endl; // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Mat size is always odd"
	}
}
