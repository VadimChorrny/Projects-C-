//#include<iostream>
//#include<string>
//#include<ctime>
//
//using namespace std;
//struct Date
//{
//    int day;
//    int month;
//    int year;
//    void Print()
//    {
//        cout << "Date of B:" << day << "." << month << "." << year << endl;
//    }
//};
//struct Worker
//{
//    string FirstName;
//    string LastName;
//    double salary;
//    int age;
//    Date data;
//
//    void Print()
//    {
//
//        cout << "First name:" << FirstName << endl;
//        cout << "Last name:" << LastName << endl;
//        cout << "Age:" << age << endl;
//        cout << "Salary:" << salary << endl;
//        data.Print();
//
//    }
//    void SetSalary(double salary)
//    {
//
//        this->salary = salary;
//
//    }
//
//    double GetSalary()
//    {
//
//        return salary;
//
//    }
//};
//void CreatWorker(Worker* w)
//{
//
//    int ageOld = 0;
//    int sallaryBig = 0;
//    int index = 0;
//    string sn[6] = { "Bondarenko", "Melnik", "Sheva", "Tkachenko", "Koval", "Box" };
//    string n[6] = { "Lexus", "Sanya", "Maks", "Borya", "Yurets", "Vladilen" };
//    int c, b;
//    c = rand() % 5;
//    b = rand() % 5;
//    w->FirstName = n[b];
//    w->LastName = sn[c];
//    w->age = 22 + rand() % 39;
//    w->salary = rand() % 2000;
//
//}
//
//
//
//void main()
//{
//    srand(time(0));
//    setlocale(LC_ALL, "ukr");
//    int older = 0;
//    int salary = 0;
//    int* arr = new int[5];
//    Worker* workers = new Worker[10];
//    for (int i = 0; i < 10; i++)
//    {
//        CreatWorker(&workers[i]);
//        workers[i].Print();
//        cout << endl;
//    }
//    cout << "The old man: " << endl;
//    
//    for (int i = 0; i < 10; i++)
//    {
//        if (workers[i].age > workers[older].age)
//        {
//            older = i;
//        }
//        cout << endl;
//    }
//
//    workers[older].Print();
//
//
//}

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

void Students() {
    string sn[6] = { "Bondarenko", "Chirkp", "Sheva", "Tkachenko", "Koval" };
    string n[6] = { "Lexus", "Sanya", "Maks", "Boris", "Yurets" };
    string sn[6] = { "Chorrny", "Melnik", "Sheva", "Tkachenko", "Koval" };
    string n[6] = { "Vadim", "Petro", "Lil", "Oleg", "Vadim" };
    string sn[6] = { "Bondarenko", "Myasov", "Pump", "Nechiporenko", "Kovalets" };
    string n[6] = { "Oleksii", "Sanya", "Maks", "Borya", "Yurets" };
}

void main() {


    cout << "1.Show all excellents: " << endl;
    cout << "2.Show leader in whose class the best performance: " << endl;
    cout << "3.Show all excellents: " << endl;
    cout << "4.Print the name of the class with the worst performance:" << endl;
    cout << "5.Show all siblings: " << endl;
    cout << "6.Show children born in one day: " << endl;
    cout << "7.Show the oldest student." << endl;
    cout << "8.How many students have an average score greater than 8.5?" << endl;
    cout << "9.In which class are the most privileged?" << endl;



}
