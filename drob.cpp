#include <iostream>
#include <string>

using namespace std;

int action = 1;
int commonDivisor = 1;

struct Position {
	int feeder;
	int subtractor;
};

Position place_first, place_second, Result;

void greatCommonDivisor(int dividend1, int dividend2) {
	if (dividend1 < 0) {
		dividend1 *= (-1);
	}
	if (dividend2 < 0) {
		dividend2 *= (-1);
	}
	if (dividend1 < dividend2) {
		for (int i = dividend1; i > 0; i--)
		{
			if (dividend1 % i == 0 && dividend2 % i == 0) {
				commonDivisor = i;
				i = 0;
			}
		}
	}
	else {
		for (int i = dividend2; i > 0; i--)
		{
			if (dividend2 % i == 0 && dividend1 % i == 0) {
				commonDivisor = i;
				i = 0;
			}
		}
	}
};

void showResult(int operation) {
	string operationSign;
	string resultSign;

	if (operation == 1) {
		operationSign = '+';
	}
	else if (operation == 2) {
		operationSign = '-';
	}
	else if (operation == 3) {
		operationSign = 'X';
	}
	else if (operation == 4) {
		operationSign = ':';
	}
	if (Result.feeder < 0 && Result.subtractor > 0 || Result.feeder > 0 && Result.subtractor < 0) {
		resultSign = '-';
	}
	else {
		resultSign = ' ';
	}
	if (Result.subtractor != 1)
	{
		if (Result.subtractor < 0) {
			Result.subtractor *= (-1);
		}
		if (Result.feeder < 0) {
			Result.feeder *= (-1);
		}
		if (Result.feeder < Result.subtractor)
		{
			cout << " " << place_first.feeder << place_second.feeder << "--- " << Result.feeder << endl;
			cout << "----" << operationSign << "----" << resultSign << "-----" << endl;
			cout << " " << place_first.subtractor << place_second.subtractor << "--- " << Result.subtractor << endl;
		}
		else if (Result.feeder > Result.subtractor) {
			cout << " " << place_first.feeder << place_second.feeder << "---    " << Result.feeder % Result.subtractor << endl;
			cout << "----" << operationSign << " ----   " << resultSign << " " << Result.feeder / Result.subtractor << " -----" << endl;
			cout << " " << place_first.subtractor << "  " << place_second.subtractor << "---    " << Result.subtractor << endl;
		}
		else if (Result.feeder == Result.subtractor) {
			cout << " " << place_first.feeder << "  " << place_second.feeder << "---    " << endl;
			cout << "----  " << operationSign << " ----   " << resultSign << " " << 1 << endl;
			cout << " " << place_first.subtractor << "  " << place_second.subtractor << "---    " << endl;
		}
	}
	else {
		cout << " " << place_first.feeder << "  " << place_second.feeder << "---    " << endl;
		cout << "----  " << operationSign << " ----" << Result.feeder << endl;
		cout << " " << place_first.subtractor << "  " << place_second.subtractor << "\t---    " << endl;
	}
}

void calc(int feeder1, int subtractor1, int feeder2, int subtractor2, int action) {
	greatCommonDivisor(subtractor1, subtractor2);
	int operationFraction = action;
	if (action == 2) {
		operationFraction = -1;
	}
	Result.subtractor = (subtractor1 * subtractor2) / commonDivisor;
	Result.feeder = (Result.subtractor / subtractor1) * feeder1 + (Result.subtractor / subtractor2) * feeder2 * operationFraction;
	if (action == 3) {
		Result.subtractor = subtractor1 * subtractor2;
		Result.feeder = feeder1 * feeder2;
	}
	if (action == 4) {
		Result.feeder = feeder1 * subtractor2;
		Result.subtractor = subtractor1 * feeder2;
	}
	greatCommonDivisor(Result.subtractor, Result.feeder);
	Result.subtractor = Result.subtractor / commonDivisor;
	Result.feeder = Result.feeder / commonDivisor;
	showResult(action);
}

void enterData() {
	cout << "Example of fraction equatation: " << endl;
	cout << endl;
	cout << "num_1\t\tnum_2\t---" << endl;
	cout << "----\t  +\t----\t\tRESULT" << endl;
	cout << "den_1\t\tden_2\t---" << endl;
	cout << endl;
	cout << "Enter feeder of first fraction: - >";
	cin >> place_first.feeder;
	cout << "Enter defeeder of first fraction: - >";
	cin >> place_first.subtractor;
	cout << "Enter feeder of second fraction: - >";
	cin >> place_second.feeder;
	cout << "Enter defeeder of second fraction: - >";
	cin >> place_second.subtractor;
	cout << endl << "So the result of all this is: " << endl;
	calc(place_first.feeder, place_first.subtractor, place_second.feeder, place_second.subtractor, action);
}

void menu() {
	do
	{
		cout << endl;
		cout << "Magical Fraction Calculator Salute You!" << endl;
		cout << "Chose arithmetic operation:" << endl;
		cout << "1. Addition (+)" << endl;
		cout << "2. Substraction (-)" << endl;
		cout << "3. Multiplication (*)" << endl;
		cout << "4. Division(:)" << endl;
		cout << "5. Exit from Magical Fraction Calculator" << endl;
		cout << endl;
		cout << "Select action from menu - >> _" << endl;
		cin >> action;
		switch (action)
		{
		case 1: {
			enterData();
		}break;

		case 2: {
			enterData();
		}break;

		case 3: {
			enterData();
		}break;

		case 4: {
			enterData();
		}break;

		case 5: {
			cout << "Good bye!" << endl;
		}break;

		default: {
			cout << "error" << endl;
		}break;
		}
	} while (action != 5);
}

int main() {
	menu();
	return 0;
}
