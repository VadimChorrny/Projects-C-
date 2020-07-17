#include<iostream>
#include<string>
#include<ctime>
using namespace std;

const int sizeGroup = 20;
string group[sizeGroup];
int currentIndex = 0;





void showAllStudents() {  // not template
	bool isEmpty = true;
	for (int i = 0; i < sizeGroup; i++)
	{
		if (group[i] != "") {
			cout << i + 1 << "." << group[i] << endl;
			isEmpty = false;
		}
	}

	if (isEmpty == true) {
		cout << "List is empty!" << endl;
	}
	cout << endl;

}
template <typename Type1>
Type1 addStudent(Type1 nameOfStudent) {
	if (currentIndex < sizeGroup) {
		group[currentIndex] = nameOfStudent;
		currentIndex++;
	}
	else {
		cout << "Group is full" << endl;
	}
	cout << endl;

}


template <typename Type>
Type removeStudent(Type indexOfStudent) { //1
	group[indexOfStudent] = "";

	string tempArray[sizeGroup];
	int tempIndex = 0;

	for (string item : group)
	{
		if (item != "") {
			tempArray[tempIndex] = item;
			tempIndex++;
		}
	}

	for (int i = 0; i < sizeGroup; i++)
	{
		group[i] = tempArray[i];
	}
	cout << endl;
}


void managerStudents() {    // not template 
	int action = 0;

	do
	{
		cout << "1.Show all students" << endl;
		cout << "2.Remove student" << endl;
		cout << "3.Add student" << endl;
		cout << "4.Exit" << endl;
		cout << endl;
		cout << "Select action->_";
		cin >> action;

		switch (action)
		{
		case 1: {
			system("cls");
			showAllStudents();
		}break;

		case 2: {
			system("cls");
			int tempNumber = 0;
			cout << "Enter number student for delete: ";
			cin >> tempNumber;
			removeStudent(tempNumber - 1);
		}break;

		case 3: {
			system("cls");
			string temp;
			cout << "Enter name for new student: ";
			cin >> temp;

			addStudent(temp);
		}break;

		case 4: {
			cout << "Goodbye" << endl;
		}break;

		}
	} while (action != 4);

}

int main() {

	managerStudents();

	return 0;
}
