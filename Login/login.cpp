#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void main()
{
	string loginW, passwordW, loginF, passwordF, action;
	cout << " --------------" << endl;
	cout << "|  Enter login |" << endl;
	cout << " --------------" << endl;

	getline(cin, loginW);

	cout << " --------------" << endl;
	cout << "|  Enter pass  |" << endl;
	cout << " --------------" << endl;

	getline(cin, passwordW);

	ifstream login;		
	login.open("D:\\text.txt");
	bool Isregister = true;
	if (login.is_open())
	{
		while (!login.eof())
		{
			getline(login, loginF);
			getline(login, passwordF);
			if (loginF == loginW)
			{
				Isregister = false;
				if (passwordF == passwordW)
				{
					cout << "Welcome";
				}
				else
				{
					cout << "error" << endl;
				}
			}
		}
	}
	login.close();
	if (Isregister)
	{
		cout << "Enter variant: create , change  " << endl;
		cin >> action;
		if (action == "create") {
			ofstream file("D:\\text.txt", ios_base::app);
			file << loginW << endl;
			file << passwordW << endl;
			cout << "register new user\n";
			file.close();
		}
		else if (action == "change") {
			string newPass;
			cout << "enter new pass:" << endl;
			cin >> newPass;
			ofstream file("D:\\text.txt");
			file << newPass << endl;
		}
		else {
			cout << "bye" << endl;
			system("cls");
		}
	}
}
