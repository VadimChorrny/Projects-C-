#include<iostream>
#include<string>

using namespace std;
int index = 0;
int lenghtString(string str) {
	char arr[255];
	strcpy_s(arr, str.c_str());
	for (int i = 0; str[i]!='\0'; i++) {		
		index++;
	}
	return index;
}
void main()
{
	int sizeString = 0;
	string str;
	getline(cin, str);
	index = lenghtString(str);
	cout << "Lenght your string is " << index << endl;
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
