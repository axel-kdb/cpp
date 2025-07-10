#include <iostream>
using namespace std;

bool isPrimeNumber (int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0)
			return false;
	}
	return true;
}

int main() {

	int user_number;
	cout << "Enter number: ";
	cin >> user_number;	

	for (int i = 2; i < user_number; i++) {
		bool isPrime = isPrimeNumber(i);
		if (isPrime)
			cout << i << " is prime number\n";
		else
			cout << i << " is not prime number\n";
		}
	return 0;	
}

