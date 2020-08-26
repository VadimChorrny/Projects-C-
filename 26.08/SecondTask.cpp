// 2)Створити функцію яка буде називатись call якій буде передаватись указатель на номер телефону на який потрібно подзвонити,
// у функції має статись рандом від 1 - 2, якщо згенерилось 1 - статус дзвоніка успішно, якщо 2 то статус дзвінка ЛІНІЯ ЗАЙНЯТА,
// якщо стату 2 передзвонити користувачеві автоматично через 15 секунду (Подумайте через що зробить!) 
// якщо стату 1 то повернути номер телефону та зрандомлений час розмови.  

#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;

void call() {
	int a;
	cout << "Enter number: " << endl;
	cin >> a;
	cout << "wait pleese... " << a << endl;
}

void status2() {
	for (int i = 0; i < 15 ; i++)
	{
		cout << "waiting .." << i << "seconds" << endl;
		Sleep(1000);
		system("cls");
		randNum();
	}
}

void status1() {

	for (int i = 0; i < 100; i++)
	{
		cout << "you govorite yze: " << i << "seconds" << endl;
	}
	

}

void randNum() {
	int randomNumber[2] = {};
	int* ptrRandNum = randomNumber;
	for (int i = 0; i < 2; i++)
	{	
			ptrRandNum[i] = rand() % 2 +1;
			cout << ptrRandNum[i] << endl;
	}

	if (ptrRandNum > 0 ) {
		cout << "zainyato" << endl;
		status2();
	}
	else if (ptrRandNum < 0){
		cout << "rabotae" << endl;
	}
}


void menu() {
	cout << "\tPHONE" << endl;
	cout << "=====================" << endl;
	cout << "Call to number" << endl;
	call();
	randNum();
	
}

int main() {
	menu();
}

