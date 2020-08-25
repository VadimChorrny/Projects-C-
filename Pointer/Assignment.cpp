// Используя указатели и оператор разыменования, определить наибольшее из двух чисел.

#include <iostream>
using namespace std;

void maxNumber(int* first, int* second) {
	int max = *first;
	if (*first < *second) {
		max = *second;
	}
	cout << "Max number:" << max << endl;
}

int main() {
	int number, number2;
	cout << "enter first number" << endl;
	cin >> number;
	cout << "enter second number" << endl;
	cin >> number2;
	maxNumber(&number, &number2);

	return 0;
}
