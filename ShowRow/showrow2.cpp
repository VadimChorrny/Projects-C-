//1. Написати функцію, яка отримує рядок і повертає довжину рядка.
//2. Дано рядок.Видалити із рядка заданий символ.

#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

#define Виведи cout << 
#define якщо if 
#define інакше else
#define стрінга string 
#define інт int 
#define закінчить << endl;
#define падажди Sleep(1500)

void func()
{
	стрінга str;
	стрінга deleting;
	Виведи "Fill your rows: ";
	getline(cin, str);
	Виведи "Your rows: \t" << str.length() закінчить
	Виведи "Show your rows: " << str закінчить
	падажди;
	Виведи "which symbol to delete ?" закінчить
	getline(cin, deleting);
	інт index = str.find(deleting);
	якщо (index < 0) {
		Виведи "error" закінчить
	}
	інакше {
		Виведи "symbol element is on " << index + 1 << " place" закінчить
		str.erase(index, 1);
	}
	Виведи  str закінчить
}

void main()
{
	func();
}
