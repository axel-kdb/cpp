#include <iostream>
using namespace std;

int main() {

	int number;
	int reversed_number = 0;
	cout << "Number: ";
	cin >> number;

	while (number != 0) {
	
		reversed_number *= 10;
		int last_digit = number % 10;
		reversed_number += last_digit;
		number /= 10;
	
	} 
		
	cout << "Reversed: " << reversed_number << endl;

}
