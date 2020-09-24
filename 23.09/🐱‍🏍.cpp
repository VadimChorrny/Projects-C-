//Написати функції для роботи з динамічним одновимірним масивом :
//-Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.Функція повертає адресу створеного масиву.
//- Виводу масиву
//- Доповнення масиву одним елементом в кінець.Функція отримує адресу масиву, розмір та елемент для доповнення.
//- Видалення елементу
//- Видалення елемента за вказаною позицією.
//- Доповнення масиву одним елементом на 0 індекс.Функція отримує адресу масиву, розмір та елемент для доповнення.
//- Меню


#include<iostream>
#include<time.h>
using namespace std;

void random(int* arr, int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;

	}
}

void output(int* arr1, int size1) {
	for (int i = 0; i < size1; i++)
	{
		cout << arr1[i] << " ";
	}
}

void deleteElement(int*& arr2, int& size2, int index1) {
	int* temp = new int[size2];
	for (int i = 0; i < size2; i++)
	{
		if (i != index1) {
			temp[i] = arr2[i];
		}
	}
	delete[] arr2;
	size2;
	arr2 = new int[size2 - 1];
	int j = 0;
	for (int i = 0; i < size2; i++)
	{
		if (i != index1) {

			arr2[j] = temp[i];
			j++;
		}
	}
	size2--;
}


void addElement(int*& arr2, int& size2, int index, int number) {
	int* temp = new int[size2 + 1];
	size2++;
	int j = 0;
	for (int i = 0; i < size2; i++)
	{
		if (i != index) {
			temp[i] = arr2[j];
			j++;
		}
		else {
			temp[i] = number;
		}
	}
	delete[] arr2;
	arr2 = new int[size2];

	for (int i = 0; i < size2; i++)
	{
		arr2[i] = temp[i];
	}
	delete[] temp;
	temp = nullptr;
}

int main() {
	int count = 0;
	int action = 0;
	cout << "\tEnter the size of the array:  ";
	cin >> count;
	int* ptr = new int[count];
	random(ptr, count);
	do
	{
		cout << "\t 1) Show array" << endl;
		cout << "\t 2) Add element in array with index" << endl;
		cout << "\t 3) Delete element in array with index" << endl;
		cout << "\t 4) Exit" << endl;
		cout << endl;
		cout << "\tEnter number action:";
		cin >> action;
		int index = 0;
		switch (action)
		{
		case 1: {
			output(ptr, count);
			cout << endl;
		}break;

		case 2: {
			int number = 0;
			cout << "Enter new elements for arr-> ";
			cin >> number;
			cout << "Enter index for this elements-> ";
			cin >> index;
			output(ptr, count);
			addElement(ptr, count, index, number);
		}break;

		case 3: {
			output(ptr, count);
			cout << "Enter index for elements:";
			cin >> index;
			deleteElement(ptr, count, index);
			output(ptr, count);
		}break;
		default:
			cout << "error";
			break;
		}

	} while (action != 4);

	return 0;
}
