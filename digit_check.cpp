#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Number: ";
	cin >> number;

	if (number == 0)
		cout << "You have entered 0.\n";
	else {
	
		int counter = 0;
		while (number != 0) {
			number /= 10;
			counter ++;
		}
		cout << "Number contains " << counter << " digits\n";
		
	}
}
