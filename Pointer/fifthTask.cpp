#include<iostream>

using namespace std;
void united(int* arr1, int* arr2, int* arr3, int* prtsize, int* elm) {
	for (int i = 0; i < *prtsize; i++) {
		bool check = false;
		for (int j = 0; j < *prtsize; j++) {
			if (*(arr1 + i) == *(arr2 + j)) {
				check = true;
			}
		}
		if (check == false) {
			*(arr3 + (*elm)) = *(arr1 + i);
			(*elm)++;
		}
	}
}


void showArray(int* arr3, int* elm) {
	for (int i = 0; i < *elm; i++) {
		cout << *(arr3 + i) << " ";
	}
}

int main() {
	int elements = 0;
	const int size = 10;
	int size1 = size;
	int number1[size];
	int number2[size];
	int number3[size];
	for (int i = 0; i < size; i++)
	{
		cin >> number1[i];
	}
	for (int i = 0; i < size; i++)
	{
		cin >> number2[i];
	}

	united(number1, number2, number3, &size1, &elements);
	showArray(number3, &elements);
	return 0;
}
