//============================================================================
// Name        : Breaks_and_Continues.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
//breaks will cause a stop to the loop and it will then go to the next part
	for (int i = 1; i < 5; i++) {
		cout << "i is: " << i << endl;
		if (i == 3) {
			break;
		}
		cout << "Logging..." << endl;
	}
	cout << "The break has stopped my logging..." << endl;

//continue will not completely stop the loop, but it will go on to the next part of the loop without finishing the rest
	for (int i = 1; i < 5; i++) {
		cout << "i is now: " << i << endl;
		if (i == 3) {
			continue;
		}
		cout << "Logging i still..." << endl;
	}
	cout << "It did not log after i was equal to 3 because of the continue" << endl;
	return 0;
}
