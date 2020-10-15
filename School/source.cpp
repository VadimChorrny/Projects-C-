#include<iostream>
#include<string>
#include<ctime>

using namespace std;

int countStudent = 10;

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

int avarageGroup = 0;
int averageUpper = 0;

struct Worker
{
    string group;
    string FirstName;
    string LastName;
    string manager;
    string brosAndSist;
    double average;
    double ball;
    bool benefits;
    int age;
    int dateBirthday;

    Date data;




    void Print()
    {
        cout << "First name:" << FirstName << endl;
        cout << "Last name:" << LastName << endl;
        cout << "Groups: " << group << endl;
        cout << "Age:" << age << endl;
        cout << "Average:" << average << endl;
        cout << "Average groups:" << avarageGroup << endl;
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
    string group[3] = {"BY022", "BY021", "FUTURE VG"};
    int name,lastName,managerName,groupName,c,b, countGroup = 0;
    name = rand() % 5;
    lastName = rand() % 5;
    managerName = rand() % 3;
    groupName = rand() % 3;
    avarageGroup = rand() % 12;
    w->FirstName = nameStudents[name];
    w->LastName = lastNameSudents[lastName];
    w->age = rand() % 17;
    w->average = rand() % 11;
    w->benefits = rand() % 2;
    w->manager = managerName[manager];
    w->group = groupName[group];
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

void bestTeacher() 
{
    Worker* teachers = new Worker[10];
    cout << endl;
    if (averageUpper > 1)
    {
        cout << "Best teacher: " << teachers->manager << endl;
        cout << endl;
    }
    
    else if (averageUpper < 1) {
        cout << "Bad teacher: " << teachers->manager << endl;
        cout << endl;
    }


}

void badGroup()
{
    int indexGroupBad = 0;

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
        if (workers[avarageGroup].average < 6)
        {
            
            indexGroupBad++;
            system("color 3"); cout << "Bad group:" << workers->group << "||" << avarageGroup << endl;
        }

        cout << endl;
    }

    
}

void benefitsGroup()
{
    int indexBenefits = 0;
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
        if (workers[indexBenefits].benefits == workers->benefits)
        {
            indexBenefits++;
            cout << "Count benefits: " << workers[indexBenefits].benefits << workers->group << endl;
        }
        else 
        {
            cout << "Equally!!!" << endl;
        }

        cout << endl;
    }


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
            bestTeacher();
        }break;
        case 3: {
            badGroup();
        }break;
        case 4: {

        }break;
        case 5: {

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
            benefitsGroup();
        }break;
        case 10: {
            cout << "Good Bye" << endl;

        }break;

        }

    } while (action != 9);
}
