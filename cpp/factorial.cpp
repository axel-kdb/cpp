#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Number: ";
	cin >> number;

	int factorial = 1;

	for (int i = number; i >= 1; i--) {
		factorial = factorial * i;
	}

	cout << number << "!=" << factorial <<endl;
}
