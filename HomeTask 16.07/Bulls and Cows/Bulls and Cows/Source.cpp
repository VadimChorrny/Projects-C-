#include<iostream>
#include<string>
#include"windows.h"
#include<conio.h>
#include<ctime>

using namespace std;

#define CLEAN system("cls");

int User[4];
int Random[4];

inline float Number() {
	cout << "Input number -->" << endl;
	for (int i = 0; i < 4; i++) {
		int date = _getch();

		cout << char(date);
		User[i] = date;
	}
	return 0;
}

inline float random() {
	srand(time(NULL));
	for (int i = 0; i < 4; i++) {
		Random[i] = 48 + rand() % 9;
	}
	return 0;
}

inline float CyclesForGame() {
	random();
	int bulls = 0;
	int cows = 0;
	int attempts = 0; // attempts - because try is variable
	int win = 0;
	do {
		attempts++;
		Number();
		for (int i = 0; i < 4; i++) {
			win = 0;
			cows = 0;
			bulls = 0;
			for (int j = 0; j < 4; j++) {
				if (User[i] == Random[j]) {
					cows++;


				}

				if (User[i] == Random[i]) {
					bulls++;

				}

			}
		}
		cout << "bulls: " << bulls << endl;
		cout << "cows: " << cows << endl;
		Sleep(500);
		CLEAN;
	} while (bulls != 4);
	CLEAN;
	cout << "you win with " << attempts << " attempts :)";
	return 0;
}

int main() {
	CyclesForGame();
}