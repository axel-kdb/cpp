#include <iostream>
using namespace std;

int main() {
	float grade;
	int grades = 3;
	float sum = 0;

	for(int i = 0; i < grades; i++) {
		do {
			cout << "Enter grade " << i + 1 << ": ";
			cin >> grade;
		
		} while (grade < 1 || grade > 5);
		sum += grade;
	}	
	
	cout << "Sum = " << sum << endl;
	cout << "Avg grade = " << sum / grades << endl; 

	return 0;	
}

