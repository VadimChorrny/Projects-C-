#include<iostream>
#include"windows.h"
#include<string>


using namespace std;

int i = 0;
const int size_first = 100; // max 100
const int size_second = 3;

int date[size_first][size_second];

string task[size_first];
string priority[size_first];

float AddNewTask() {

	getline(cin, task[i]);
	cout << "enter your task: ";
	getline(cin, task[i]);
	system("cls");
	cout << "enter date for your task: ";
	cin >> date[i][i] >> date[i][i + 1] >> date[i][i + 2];
	system("cls");
	cout << "enter prioritet for task [A,B,C]: ";
	getline(cin, priority[i]);
	getline(cin, priority[i]);
	i++;
	return 0;
}

float deletedTask() {
	int   date_first;
	int   date_second;
	int   date_third;

	cout << "enter date delete" << endl;
	cin >> date_first >> date_second >> date_third;

	for (int j = 0; j < i; j++) {
		if (date[j][0] == date_first && date[j][1] == date_second && date[j][2] == date_third) {
			date[j][0] = 0;
			date[j][1] = 0;
			date[j][2] = 0;
			task[j] = "";
			priority[j] = "";

		}

	}
	return 0;
}

float Prioritet() {
	string str;
	for (int j = 0; j < i; j++) {
		if (priority[j] == "C") {
			cout << task[j] << "[" << date[j] << "] " << "importent" << endl;
		}
		else if (priority[j] == "B") {
			cout << task[j] << "[" << date[j] << "]" << "midle importent" << endl;
		}
		else if (priority[j] == "A") {
			cout << task[j] << "[" << date[j] << "]" << "not a importent" << endl;
		}


	}
	system("pause");
	return 0;
}

float hightDate() {
	int DateYear[size_first];
	int DateMounth[size_first];
	int DateDays[size_first];
	double Year = 0;
	double Mounth = 0;
	double Days = 0;
	bool year = false;
	for (int j = 0; j < i; j++) {
		if (date[j][2] > Year) {
			for (int g = 0; g < i; g++) {
				if (date[j][2] != DateYear[g]) {
					if (g == i - 1) {
						string priorit;
						if (priority[j] == "C") {
							priorit = "importent";
						}
						else if (priority[j] == "B") {
							priorit = "midle importent";
						}
						else {
							priorit = "not a  importent";
						}
						cout << task[j] << "[" << date[j][j] << date[j][j + 1] << date[j][j + 2] << "]" << priorit << endl;
					}

				}
			}
		}


	}
	for (int j = 0; j < i; j++) {
		if (date[j][1] > Mounth) {
			for (int g = 0; g < i; g++) {
				if (date[j][1] != DateMounth[g]) {
					if (g == i - 1) {
						string prio;
						if (priority[j] == "C") {
							prio = "importent";
						}
						else if (priority[j] == "B") {
							prio = "midle importent";
						}
						else {
							prio = "not a  importent";
						}
						cout << task[j] << "[" << date[j][j] << date[j][j + 1] << date[j][j + 2] << "]" << prio << endl;
					}

				}
			}
		}
	}

	for (int j = 0; j < i; j++) {
		if (date[j][0] > Days) {
			for (int i = 0; i < i; i++) {
				if (date[j][0] != DateDays[i]) { // i zamenit na g
					if (i == i - 1) {
						string prioritet;
						if (priority[j] == "C") {
							prioritet = "importent";
						}
						else if (priority[j] == "B") {
							prioritet = "midle importent";
						}
						else {
							prioritet = "not a  importent";
						}
						cout << task[j] << "[" << date[j][j] << date[j][j + 1] << date[j][j + 2] << "]" << prioritet << endl;
					}

				}
			}
		}
	}
	return 0;
}

float PrioritySecond() {
	int c, b, a = 0;
	for (int j = 0; j < i; j++) {
		if (priority[j] == "C") {
			if (date[j] == 0) {
				break;
			}
			cout << task[j] << " [" << date[j][j] << date[j][j + 1] << date[j][j + 2] << "]" << "importent" << endl;
		}
	}
	for (int j = 0; j < i; j++) {
		if (priority[j] == "B") {
			if (date[j] == 0) {
				break;
			}
			cout << task[j] << "[" << date[j][j] << date[j][j + 1] << date[j][j + 2] << "]" << "midle importent" << endl;
		}
	}
	for (int j = 0; j < i; j++) {
		if (priority[j] == "A") {
			if (date[j] == 0) {
				break;
			}
			cout << task[j] << "[" << date[j][j] << date[j][j + 1] << date[j][j + 2] << "]" << "not a importent" << endl;
		}

	}
	system("pause");

	return 0;
}


void PlannerMenu() {
	int action = 0;

	do
	{
		cout << "1.Show all events" << endl;
		cout << "2.Remove  events" << endl;
		cout << "3.Add events" << endl;
		cout << "4.Exit" << endl;
		cout << "\n";
		cout << "Select action: ";
		cin >> action;
		system("cls");

		switch (action)
		{
		case 1: {
			int ach;
			cout << "1.sortirovka po date add" << endl;
			cout << "2.sortirovka po date" << endl; // I have question.. what here three povtoryuvanya???? 
			cout << "3.sortirovka po priority" << endl;
			cin >> ach;
			if (ach == 1) {
				Prioritet();
			}
			else if (ach == 2) {
				hightDate();
			}
			else if (ach == 3) {
				PrioritySecond();
			}

		}break;

		case 2: {
			deletedTask();
			system("cls");
		}break;

		case 3: {
			AddNewTask();
			system("cls");
		}break;

		case 4: {
			cout << "Goodbye" << endl;
			system("cls");
		}break;

		}

	} while (action != 4);

}

int main() {

	PlannerMenu();
}
