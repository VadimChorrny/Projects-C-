#include<iostream>
#include<string>
#include<ctime>

using namespace std;

struct Date
{
    int day;
    int month;
    int year;
    void Print()
    {
        cout << "Date of B:" << day << "." << month << "." << year << endl;
    }
};

struct Worker
{
    string FirstName;
    string LastName;
    double average;
    double ball;
    bool privileges;
    int dateBirthday;
    Date data;


    void Print()
    {
        cout << "First name:" << FirstName << endl;
        cout << "Last name:" << LastName << endl;
        cout << "Age:" << dateBirthday << endl;
        cout << "Average:" << average << endl;

        data.Print();

    }
};

void CreatWorker(Worker* w) {
    string sn[6] = { "Bondarenko", "Chirkp", "Sheva", "Tkachenko", "Koval" };
    string n[6] = { "Lexus", "Sanya", "Maks", "Boris", "Yurets" };
    int name, lastName, birthday, avarage;
    name = rand() % 5;
    lastName = rand() % 5;
    w->FirstName = n[name];
    w->LastName = sn[lastName];
    w->dateBirthday = 22 + rand() % 39;
    w->average = rand() % 11;
}

void olderStudents() {
    srand(time(NULL));
    int older = 0;
    Worker* workers = new Worker[10];
    for (int i = 0; i < 10; i++)
    {
        CreatWorker(&workers[i]);
        workers[i].Print();
        cout << endl;
    }
    cout << endl;

    cout << "The old man: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (workers[i].dateBirthday > workers[older].dateBirthday)
        {
            older = i;
        }
        cout << endl;
    }

    workers[older].Print();
}

void main() {
    
    int action = 0;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "1.Show all excellents: " << endl;
        cout << "2.Show leader in whose class the best performance: " << endl;
        cout << "3.Show all excellents: " << endl;
        cout << "4.Print the name of the class with the worst performance:" << endl;
        cout << "5.Show all siblings: " << endl;
        cout << "6.Show children born in one day: " << endl;
        cout << "7.Show the oldest student." << endl;
        cout << "8.How many students have an average score greater than 8.5?" << endl;
        cout << "9.In which class are the most privileged?" << endl;
        cout << "10.Exit" << endl; 
        cout << "==========================================================================" << endl;
        cout << endl;
        cout << "Enter action-->";
        cin >> action;
        switch (action)
        {
        case 1: {

        }break;
        case 2: {

        }break;
        case 3: {

        }break;
        case 4: {

        }break;
        case 5: {

        }break;
        case 6: {

        }break;
        case 7: {
            olderStudents();
        }break;
        case 8: {

        }break;
        case 9: {

        }break;
        case 10: {

        }break;

        }

       

        

    } while (action != 9);
    



}

