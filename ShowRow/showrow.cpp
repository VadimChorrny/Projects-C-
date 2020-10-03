//1. Написати функцію, яка отримує рядок і повертає довжину рядка.
//2. Дано рядок.Видалити із рядка заданий символ.

#include<iostream>
#include<string>

using namespace std;

void func()
{
	string str;
	string deleting;
	cout << "Enter: ";
	getline(cin, str);
	cout << "Your rows: \t" << str.length() << endl;
	cout << "which symbol to delete ?" << endl;
	cin >> deleting;
	int index = str.find(deleting);
	if (index < 0) {
		cout << "error" << endl;
	}
	else {
		cout << "symbol element is on " << index + 1 << " place" << endl;
		str.erase(index, 1);
	}
	cout << str << endl;
}

void main()
{
	func();
}
