#include<iostream>
#include <time.h>
#include<string>
#include"windows.h"

using namespace std;

#define clean system("cls");

int nameVictorine;
int trueQuestion;
int falseVariant;
int victorines;
int victorine;

void addQuestions() {
	cout << "Enter your victorine name: ";
	cin >> nameVictorine;
	cout << "Enter question true:" << endl;
	cin >> trueQuestion;
	cout << "Enter false variant " << endl;
	cin >> falseVariant;

	//if (trueQuestion == true) {
	//	cout << "You win!" << endl;
	//}
	//else {
	//	cout << "you loose!" << endl;
	//}
}


void output() {
	cout << "Your victorines" << endl;

	// add output
	
}

void PlannerMenu() {
	srand(time(NULL));
	int action = 0;

	do
	{
		cout << "[1].Show quiz" << endl;
		cout << "[2].Add new question" << endl;
		cout << "[3].Exit" << endl;
		cout << endl;
		cout << "Select action: ";
		cin >> action;
		system("cls");

		switch (action)
		{
		case 1: {
			
		}break; 
		case 2: {
			addQuestions();
		}break; 
		case 3: {
			cout << "Goodbye" << endl;
			system("cls");
		}break; 
		}

	} while (action != 3);

}

int main() {
	
	PlannerMenu();
}
