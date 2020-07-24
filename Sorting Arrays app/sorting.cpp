#include<iostream>
#include<windows.h>
#include<cstdlib>
#include <time.h>

using namespace std;
#define SLEEP Sleep(1000);

const int sizeArray = 100;
int arrays[sizeArray];

void Random() {
	int N;
	cout << "Enter number of values: ";
	cin >> N;
	int* A = new int[N];
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		A[i] = 1 + rand() % 90; // 10 and 11
		cout << A[i] << " ";
	}
	delete[] A;                // pointer
	system("PAUSE");
}

float SearchIndex() {
	int index, rem = 0;
	cout << "Enter index you want to find: ";
	cin >> index;
	for (int i = 0; i < sizeArray; i++) {
		if (index == arrays[i]) {
			cout << "Your item is below the index " << i;
			rem++;
			cout << endl;
		}
		else if (index != arrays[i] && i == sizeArray - 1 && rem == 0) {
			cout << "Your item is below the index -1";
			cout << endl;
		}

	}
	return 0;
}

float ShowArray() {
	for (int i = 0; i < sizeArray; i++) {
		cout << " " << arrays[i];
	}
	cout << endl;
	return 0;
}



float Serednye() {
	int sumaIndex = 0;
	for (int i = 0; i < sizeArray; i++) {
		sumaIndex += arrays[i];
	}
	cout << "Serednye arifmetuchne array -> " << sumaIndex / sizeArray;

	return 0;
}

void PlannerMenu() {
	srand(time(NULL));
	int action = 0;

	do
	{
		cout << "[1].Fill the array with random numbers." << endl;
		cout << "[2].Show array" << endl;
		cout << "[3].Find an element in an array - display its index." << endl;
		cout << "[4].Sorting  array" << endl;
		cout << "[5].Serednye Arifmetuchne: " << endl;
		cout << "[6].Number wich kratni 5" << endl;
		cout << "[7].Exit" << endl;
		cout << endl;
		cout << "Select action: ";
		cin >> action;
		system("cls");

		switch (action)
		{
		case 1: {
			int randStart, randEnd = 0;
			system("cls");
			cout << "Put number interval of randomization." << endl << "Enter beginning of the range :";
			cin >> randStart;
			randStart--;
			cout << "Enter end of the range :";
			cin >> randEnd;
			randEnd++;
			for (int i = 0; i < sizeArray; i++)
			{
				arrays[i] = rand() % (randEnd - randStart) + randStart;
			}
		}break; // input random numbers
		case 2: {
			ShowArray();
		}break; // show array
		case 3: {
			SearchIndex();
			SLEEP;
			system("cls");
		}break; // find index
		case 4: {
			int action = 0;
			cout << "[1].Sort by bubbles" << endl;
			cout << "[2].Sort by insert method " << endl;
			cout << "[3].Sort by sampling method " << endl;
			cin >> action;
			int count = 0;   // maybe was crash
			switch (action)
			{
			case 1: {
				for (int i = 0; i < sizeArray - 1; i++)
				{
					for (int j = 0; j < sizeArray - 1; j++)
					{
						if (arrays[j] > arrays[j + 1])
						{
							int temp = arrays[j];
							arrays[j] = arrays[j + 1];
							arrays[j + 1] = temp;
							count++;
							ShowArray();
							system("cls");
						}
					}
				}
				cout << "Was complate " << count << "steps" << endl;
				// buble function
			}break;

			case 2: {
				
				for (int i = 0; i < sizeArray; i++)
				{
					int temp = arrays[0];
					for (int j = i + 1; j < sizeArray; j++)
					{
						if (arrays[i] > arrays[j])
						{
							temp = arrays[i];
							arrays[i] = arrays[j];
							arrays[j] = temp;
							cout << "this is my animation\n";
							ShowArray();
							system("cls");
							
						}
						count++;
						
					}
				}
				cout <<"Was complete " << count << "steps" << endl;
				

			}break;

			case 3: {

				int temp = 0;
				int indexPrev = 0;


				for (int i = 1; i < sizeArray; i++)
				{
					temp = arrays[i];
					indexPrev = i - 1;


					while (indexPrev >= 0 && arrays[indexPrev] > temp)
					{
						arrays[indexPrev + 1] = arrays[indexPrev];
						arrays[indexPrev] = temp;
						indexPrev--;
						count++;
						ShowArray();

						system("cls");
					}

				}
				cout << "Was complate " << count << "steps" << endl;
			}break;

			}               // add function sorting array
		}break; // sorting
		case 5: {
			Serednye();                // add function averege
		}break; // Average
		case 6: {
			int kratne = 0;
			for (int i = 0; i < sizeArray; i++) {
				if (arrays[i] % 5 == 0) {
					kratne++;

				}
			}
			cout << kratne << "elements wich kratni 5 ";    // add %5
		}break; // multiplicity
		case 7: {
			cout << "Goodbye" << endl;
			system("cls");
		}break; // exit
		}

	} while (action != 7);

}

int main()
{
	PlannerMenu();

	return 0;
}
