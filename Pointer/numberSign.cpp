//Используя указатели и оператор разыменования, определить знак числа, введённого с клавиатуры.

#include<iostream>
using namespace std;

void test() {
	int number;
	int* ptr = &number;
	cin >> *ptr;
	if (*ptr > 0) {
		cout << "+" << endl;
	} else if(*ptr < 0){
		cout << "-" << endl;
	}
	else {
		cout << "error" << endl;
	}
}

void output() {
	cout << "Enter your number" << endl;
	test();
}

int main() {
	output();
}
