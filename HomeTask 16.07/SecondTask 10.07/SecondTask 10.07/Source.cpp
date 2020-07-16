#include<iostream>
#include<ctime>
#include<windows.h>
#include<string>

using namespace std;

template <typename T>
T nabor(T arrays[], T size) {

	int negative = 0;
	int Zero = 0;
	int positive = 0;

	for (int i = 0; i < size; i++) {
		if (arrays[i] < 0) {
			negative++;
		}
		else if (arrays[i] > 0) {
			positive++;
		}
		else {
			Zero++;
		}
	}

	cout << "positive elements ->  " << positive << "\n";
	cout << "negative elements -> " << negative << "\n";
	cout << "elements equal zero -> " << Zero << "\n";

	return 0;
}

template <typename T>
T rand(T arrays[], T size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arrays[i] = 100 - rand() % -120;
	}

	return 0;
}

int main() {
	const int _size = 100;

	int arr[_size];

	rand(arr, _size);
	nabor(arr, _size);

}