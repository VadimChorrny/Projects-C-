#include<iostream>
#include<ctime>
#include<windows.h>

using namespace std;

template <typename T>
T nabor(T arrays[], T size) {

	int neg = 0;
	int Zero = 0;
	int pos = 0;

	for (int i = 0; i < size; i++) {
		if (arrays[i] < 0) {
			neg++;
		}
		else if (arrays[i] > 0) {
			pos++;
		}
		else {
			Zero++;
		}
	}

	cout << "positive elements ->  " << pos << "\n";
	cout << "negative elements -> " << neg << "\n";
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
