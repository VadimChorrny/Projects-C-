#include<iostream>
#include<string>
#include<ctime>

using namespace std;

struct Date
{
    int day = rand() % 29;
    int month = rand() % 12;
    int year = (rand() % (2020 - 2003 + 1)) + 2003;
    void Print()
    {
        cout << "Date of Birthday:\t" << day << "." << month << "." << year << endl;
    }
};

struct Class
{
    string manager;

};

struct Worker
{
    string FirstName;
    string LastName;
    string manager;
    double average;
    double ball;
    bool benefits;
    int age;
    int dateBirthday;
    string brosAndSist;
    Date data;


    void Print()
    {
        cout << "First name:" << FirstName << endl;
        cout << "Last name:" << LastName << endl;
        cout << "Age:" << age << endl;
        cout << "Average:" << average << endl;
        cout << "Benefits:" << benefits << endl;
        cout << "Manager: " << manager << endl;
        cout << "Brosers and Sisters: " << brosAndSist << endl;


        data.Print();

    }
};

void CreatWorker(Worker* w) {
    string manager[3] = { "Serhii Bigun", "Andrii Ryabuy", "Nechiporuk Maksum" };
    string nameStudents[6] = { "Bondarenko", "Chirkp", "Sheva", "Tkachenko", "Koval" };
    string lastNameSudents[6] = { "Lexus", "Sanya", "Maks", "Boris", "Yurets" };
    int name, lastName, managerName;
    managerName = rand() % 3;
    name = rand() % 5;
    lastName = rand() % 5;
    w->FirstName = nameStudents[name];
    w->LastName = lastNameSudents[lastName];
    w->manager = managerName[manager];
    w->age = rand() % 17;
    w->average = rand() % 11;
    w->benefits = rand() % 2;
    
}

void bestStudent() {
    int bester = 0;
    Worker* workers = new Worker[10];
    for (int i = 0; i < 10; i++)
    {
        CreatWorker(&workers[i]);
        workers[i].Print();
        cout << endl;
    }
    cout << endl;
    system("color 3"); cout << "The best student:";
    for (int i = 0; i < 10; i++)
    {
        if (workers[i].average > workers[bester].average)
        {
            bester = i;
        }
        cout << endl;
    }

    workers[bester].Print();

}

void olderStudents() {

    int older = 0;
    Worker* workers = new Worker[10];
    for (int i = 0; i < 10; i++)
    {
        CreatWorker(&workers[i]);
        workers[i].Print();
        cout << endl;
    }
    cout << endl;

    system("color 1"); cout << "The old man: " << endl;
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

void avarageUp() {
    int averageUpper = 0;
    Worker* workers = new Worker[10];
    for (int i = 0; i < 10; i++)
    {
        CreatWorker(&workers[i]);
        workers[i].Print();
        cout << endl;
    }
    cout << endl;


    for (int i = 0; i < 10; i++)
    {
        if (workers[averageUpper].average < 9)
        {
            averageUpper++;
        }

        cout << endl;
    }

    system("color 3"); cout << "Best student avarage:" << averageUpper << endl;
}

void todayBirthday() {
    int todayBirthday = 0;
    Worker* workers = new Worker[10];
    for (int i = 0; i < 10; i++)
    {
        CreatWorker(&workers[i]);
        workers[i].Print();
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i = todayBirthday; i++)
    {
        if (workers[i].dateBirthday)
        {
            todayBirthday++;
        }
    }
    system("color 3"); cout << "Children born in one day:" << todayBirthday << endl;

}

void broserSister() {
    int broserAndSister = 0;
    Worker* workers = new Worker[10];
    for (int i = 0; i < 10; i++)
    {
        CreatWorker(&workers[i]);
        workers[i].Print();
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i = broserAndSister; i++)
    {
        if (workers[i].LastName == workers[i].LastName)
        {
            broserAndSister++;
            workers[i].Print();
            cout << endl;
        }
    }
    system("color 3"); cout << "Brothers and sisters: " << broserAndSister << endl;
}

void main() {
    srand(time(NULL));

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
            bestStudent();
        }break;
        case 2: {

        }break;
        case 3: {

        }break;
        case 4: {

        }break;
        case 5: {
            broserSister();
        }break;
        case 6: {
            todayBirthday();
        }break;
        case 7: {
            olderStudents();
        }break;
        case 8: {
            avarageUp();
        }break;
        case 9: {

        }break;
        case 10: {
            cout << "Good Bye" << endl;

        }break;

        }

    } while (action != 9);
}
