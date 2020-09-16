#include<iostream>
#include"windows.h"
#include<string>

using namespace std;

void addNewVictirines() {
	int question = 0;
	int variant = 0;
	int writeStartNumber = variants;
	cout << "How many question you want -> ";
	cin >> question;
	cout << "How many variants you want -> ";
	cin >> variant;
	system("cls");
	string* tempVictorines = new string[victorines + 1];
	string* tempQuestion = new string[question + question];
	string* tempVariantes = new string[(question * variants) + (question * variant)];
	int* tempTrueVariantes = new int[question + question];
	for (int i = 0; i < victorines; i++) {
		tempVictorines[i] = victorine[i];
	}
	for (int i = 0; i < question; i++) {
		tempQuestion[i] = questions[i];
	}
	for (int i = 0; i < variants; i++) {
		tempVariantes[i] = variantes[i];
	}
	victorines++;
	indexForOutput = new int[victorines];
	indexForOutputSecond = new int[victorines];
	startQuestion = new int[victorines];
	startVariantes = new int[victorines];

	for (int i = 0; i < victorines; i++) {
		cout << "Enter name your victorines" << endl;
		cin.ignore();
		getline(cin, tempVictorines[victorines - 1]);
		for (int j = question; j < (question + question); j++)
		{
			cout << "enter question" << endl;
			cin.ignore();
			getline(cin, tempQuestion[j]);
			bool trueVariants = false;
			for (int g = variants; g < (variants + variant); g++)
			{
				cout << "enter variants  " << endl;
				cin.ignore();
				getline(cin, tempVariantes[g]);
				if (trueVariants == false) {
					cout << "this variants is true -> ";
					string ach;
					cin >> ach;
					if (ach == "yes") {
						tempTrueVariantes[j] = g;
						trueVariants = true;
					}

				}

			}

		}
	}
	startQuestion[victorines - 1] = question;
	startVariantes[victorines - 1] = variants;
	question += question;
	variants += variant;
	indexForOutput[victorines - 1] = variants;
	indexForOutputSecond[victorines - 1] = question;

	victorine = new string[victorines];
	questions = new string[question];
	variantes = new string[variants];
	trueVariantes = new int[question];
	for (int i = 0; i < victorines; i++) {
		victorine[i] = tempVictorines[i];
	}
	for (int i = 0; i < question; i++) {
		questions[i] = tempQuestion[i];
		trueVariantes[i] = tempTrueVariantes[i];
	}
	for (int i = 0; i < variants; i++) {
		variantes[i] = tempVariantes[i];
	}


	delete[] tempVictorines;
	delete[] tempQuestion;
	delete[] tempVariantes;
	delete[] tempTrueVariantes;

}

void output() {

	for (int i = startQuestion[choiseVictorins - 1]; i < indexForOutputSecond[choiseVictorins - 1]; i++) {
		questions[i];
		for (int j = startVariantes[choiseVictorins - 1]; j < indexForOutput[choiseVictorins]; j++) {
			variantes[j];
		}
		cout << "Enter number variants-> ";
		cin >> choiseVariants;
		system("cls");
	}
	cout << "Correct answers:" << win << " out of " << indexForOutputSecond[choiseVictorins] << endl;
}

void plannerMenu() {
	int action = 0;
	do {
		cout << "1) Add new victorines" << endl;
		cout << "2) Show all victorines" << endl;
		cout << "Exit" << endl;
		cin >> action;
		system("cls");
		if (action == 1) {
			addNewVictirines();
		}
		else if (action == 2) {
			for (int i = 0; i < victorines + 1; i++) {
				cout << victorine[i] << endl;
				cout << questions[0];
				cout << "Choise victorines enter number ->";
				cin >> choiseVictorins;
				cout << endl;
				system("cls");
				output();
			}
		}
	} while (action != 3);
}

int newVictorins, choiseVictorins, choiseVariants, victorines, question, variants, win;
string* victorine = new string[victorines];
string* questions = new string[question];
string* variantes = new string[variants];
int* trueVariantes = new int[question];
int* indexForOutput = new int[victorines];
int* indexForOutputSecond = new int[victorines];
int* startQuestion = new int[victorines];
int* startVariantes = new int[victorines];

int main() {
	plannerMenu();
}
