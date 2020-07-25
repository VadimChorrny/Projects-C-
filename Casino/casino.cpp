#include<iostream>
#include <time.h>
#include<windows.h>
using namespace std;

#define SLEEP Sleep(5000);

string Prise[10] = { "Iphone 14 Pro Max S", "Mac Book  Pro 2020", "Rolls-Royalls Phanton",
"1.000.000", "Girls on nights", "1 grivna", "Mouse Razer ", "One free consultation in Andriya Ryabogo",
"Cycle with gold", "Nothing" };

int balance = 0;
int donate = 0;
int Guess, Try;
int First_Prize, Second_Prise;
int win();

int DonateBalance() {
	cout << "To start the game you need to throw money !!" << endl;
	cout << "Enter money you wont donate";
	cin >> donate;

    if (donate == 1000)
    {
        system("cls");
        system("color 4"); cout << "your balance:" << donate << endl;
        SLEEP;
        system("cls");
    }
    else if (donate < 1000) {
        cout << "=================================" << endl;
    }
    else {
        cout << "Dahera" << endl;
        system("cls");
        system("pause");
    }

	return 0;
}

//int OpenDoor() {
//    system("color 4"); cout << "your balance:" << donate << endl;
//    cout << "First doors"      << endl;
//    cout << "Second doors" << endl;
//    cout << "Third doors"    << endl;
//    srand(time(NULL));
//    int UserInput;
//    int win;
//    win = rand() % 2;
//    cout << "Enter doors:";
//    cin >> UserInput;
//
//    if (win == UserInput)
//    {
//        cout << "You win!" << win << endl;
//        Prise[2];
//    }
//    else if  (UserInput) {
//        cout << "You win!" << win << endl;
//        Prise[3];
//    }
//    else {
//        cout << "You loose!" << endl;
//    }
//    
//    
//    return 0;
//}

int Win() {
    if (Guess == First_Prize) {
        cout << "You win! your prize is " << Prise[1];
    }
    else if (Guess == Second_Prise) {
        cout << "You win! your prize is " << Prise[0];
    }
    return 0;
}

int OpenDoor() {
    srand(time(NULL));

    Guess = 0;
    Try = 0;
    cout << "You win! You have prise!" << endl;

    do {
        if (Guess != 0)
        cout << " Your balance:" << balance << endl;

        if (Guess > 0) {
            cout << "You loose" << endl;
        }


        int door = rand() % 3; 

        int firstPrize, secondPrize = 0; // start  0 ibo tam kasha

        if (door == 3) {
            Second_Prise = 1;
            First_Prize = 2;
        }
        else {
            firstPrize = door + 1;
            secondPrize = firstPrize + 1;

            if (secondPrize == 3)
                secondPrize = 1;
        }

        cout << "Za dveruma prise" << endl;
        cout << "Enter number:" << endl;
        cin >> Guess;
        Try++;
        balance -= 50;

        if (Guess == door) {
            Try++;
            cout << "You loose" << endl;
        }
        else if (Guess == firstPrize) {
            cout << "You win! " << endl;
            cout << "Prise:" << Prise[1];
            Win();
        }
        else if (Guess == secondPrize) {
            cout << "You win! your prize is " << Prise[0];
            Win;
        }



    } while (Try < 5 || balance < 50 || Guess == First_Prize || Guess == Second_Prise);



    return 0;
}


int RandNumber() {
    srand(time(NULL));

    int win;
    int UserInput;
    win = rand() % 16;
    system("color 4"); cout << "your balance:" << donate << endl;
    cout << "guess the number from 1 to 15 and you will receive a prize" << endl;
    cout << "Enter number: ";
    cin >> UserInput;

    if (win == UserInput)
    {
        donate++;
        system("color A"); cout << "You win!  Number was: " << win << endl;
        
        
        OpenDoor();
    }
    else
    {
        cout << "You nevdaha! You Loose! Number was: " << win << endl;
    }

    return 0;
}

int main() {

	DonateBalance();
    RandNumber();
 
	return 0;
}
