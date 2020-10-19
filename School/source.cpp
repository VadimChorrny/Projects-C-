#include <iostream>
#include <time.h>
#include <string>
#include<ctime>
#include<conio.h>
#include"windows.h"

using namespace std;

int averageStudent = 10;	
float averageAll = 0;
float date[15];
int minDate = date[0];

void SetColor(int text, int bg) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}

struct Date {
	int day = rand() % 29;	
	int month = rand() % 12;
	int year = (rand() % (2020 - 2003 + 1)) + 2003;
	void Print()
	{
		cout << "Date of Birthday:\t" << day << "." << month << "." << year << endl;
	}
};

struct Student {
	string name;
	string lastName;
	int marks[10];
	Date data;
	void print() {
		cout << "Name: " << name << endl;
		cout << "Last Name: " << lastName << endl;
		cout << "Marks: " << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << marks[i] << " ";
			data.day = rand() % 31 + 1;
			data.month = rand() % 12 + 1;
			data.year = rand() % 14 + 1990;
		}
		cout << endl;
		data.Print();
	}
};

struct Teachers {
	string name;
	string lastName;
	int day = rand() % 29;
	int month = rand() % 12;
	int year = 1990 + rand() % 20;
	void Print() {
		cout << "Name:\t\t\t" << name << endl;
		cout << "Last Name:\t\t" << lastName << endl;
		cout << "Date of Birthday:\t" << day << "." << month << "." << year << endl;
	}
};

struct Group {
	Student stud[5];
	Teachers teacher;
	string name;
	void print() {
		cout << "Student: " << endl;
		for (size_t i = 0; i < 5; i++)
		{
			cout << stud[i].name << " " << stud[i].lastName << endl;
		}
		cout << "Teacher: " << endl;
		cout << teacher.name << " " << teacher.lastName << endl;
		cout << "Name of group: " << endl;
		cout << name << endl;
	}
};



void CreateTeachers(Teachers* t, int& nameIndex) {
	string names[3] = { "Maxim","Serhii","Andrii" };
	string lastName[3] = { "Nechiporuk","Bigun","Ryabui" };
	t->name = names[nameIndex];
	t->lastName = lastName[nameIndex];
	nameIndex += 1;
}

void CreateStudents(Student* s) {
	string nameStudents[15] = { 
	"Chorrny","Bondarenko","Chirko",
	"Sheva", "Tkachenko", "Koval",
	"Bogdan","Illya", "Oleksandr",
	"Thomas","Elon","Robert","Roman",
	"Maki","Vlad" };

	string lastNameSudents[15] = {
	"Lexus", "Sanya", "Maks", "Boris",
	"Yurets", "Komarov","Gay","Dmutruk",
	"Belov","Shellby","Ford","Musk",
	"Kiosaki", "Asher", "Gantel" };

	int nameIndex, lastNameIndex;
	nameIndex = rand() % 15;
	lastNameIndex = rand() % 15;
	s->name = nameStudents[nameIndex];
	s->lastName = lastNameSudents[lastNameIndex];

	for (int i = 0; i < 10; i++)
	{
		s->marks[i] = rand() % 12;
	}
}

void CreateClass(Group* g, Student* s, Teachers* t, int& count, int& index) {

	string names[3] = { "BY021","BY022","BY023" };
	int teacher_index = rand() % 3;
	int students_index;
	for (size_t i = 0; i < 5; i++)
	{
		students_index = rand() % 15;
		g->stud[i] = s[i + count];
	}
	g->teacher = t[teacher_index];
	g->name = names[index];
	count += 5;
	index += 1;
}

// need development

void goodStudents(Student* students) {
	cout << "Good students: " << endl;

	for (int i = 0; i < 15; i++)
	{
		students->marks[i] = rand() % 12;
		for (int j = 0; j < averageStudent; j++)
		{
			if (students->marks[i] >= 9)
			{
				cout << students->name << endl;
				cout << students->lastName << endl;
				cout << students->marks << endl;
				averageAll++;
			}
		}

		if (averageAll == 10) {
			cout << students[i].name << " " << students[i].lastName << endl;
		}
	}
	
}

void bedStudents(Student* s)
{
	cout << "Bed students:" << endl;
	for (int i = 0; i < averageStudent; i++)
	{
		if (s->marks[i] < 8) {
			cout << s->name << endl;
			cout << s->lastName << endl;
			cout << s->marks << endl;

		}
	}
}

void oldBoy(Student* s) 
{
	
	
	int index = 0;
	for (int i = 0; i < 15; i++)
	{
		if (date[i] < minDate)
		{
			minDate = date[i];
			index = i;
		}
	}

	cout << "Older students" << endl;
	cout << "Name:\t\t\t" << s[index].name << endl;
	cout << "LastName:\t\t"<< s[index].lastName << endl;
	s[index].data.Print();
}


// need development

void bestTeacher(Teachers* t, Group* g)
{
	cout << t->name << endl;
	cout << t->lastName << endl;
	cout << g->name << endl;

}

void relatives(Student* s) {
	int count = 0;
	string parents[15];
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (s[i].lastName == s[j].lastName && i != j)
			{
				parents[count] = s[i].name + " " + s[i].lastName + " \t---\t " + s[j].name + " " + s[j].lastName;
				count++;
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		cout << parents[i] << endl;
	}
}

int main() {
	int nameIndex = 0;
	int count = 0;
	int action = 0;


	Student* s = new Student[15];
	Teachers* t = new Teachers[3];
	Group* g = new Group[3];

	for (int i = 0; i < 15; i++)
	{
		CreateStudents(&s[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		CreateTeachers(&t[i], nameIndex);
	}
	nameIndex = 0;
	for (int i = 0; i < 3; i++)
	{
		CreateClass(&g[i], s, t, count, nameIndex);
	}

	
	setlocale(LC_ALL, "");
	srand(time(NULL));


	string  ach[] = { 
		"\t\t\t\t\t1- ВИВЕСТИ УСIХ СТУДЕНТІВ.",
		"\t\t\t\t\t2- ВИВЕСТИ УСІХ КЕРІВНИКІВ",
		"\t\t\t\t\t3- ВИВЕСТИ ВСІ ГРУПИ",	
		"\t\t\t\t\t4- ВИВЕСТИ НАЙКРАЩУ ГРУПУ",
		"\t\t\t\t\t5- ВИВЕСТИ НАЙСТАРШОГО УЧНЯ",
		"\t\t\t\t\t6- ВИВЕСТИ НАЙКРАЩОГО ВЧИТЕЛЯ",
		"\t\t\t\t\t7- ВИВЕСТИ НАЙГІРШИХ СТУДЕНТІВ",
		"\t\t\t\t\t8- ВИВЕСТИ УСІХ БРАТІВ ТА СЕСТЕР",
		"\t\t\t\t\t9- ВИЙТИ"
	};
	int a = 0;
	while (a != 13) {
		system("cls");
		for (int i = 0; i < 8; i++) {
			if (i == action - 1) {
				SetColor(0, 14);
			}
			if (i != action - 1) {
				SetColor(15, 0);
			}
			cout << ach[i] << endl;
			SetColor(15, 0);
		}
		a = _getch();
		if (a == 119) {
			action--;
			if (action < 1) {
				action = 1;
			}
		}
		else if (a == 115) {
			action++;
			if (action > 8) {
				action = 1;
			}
		}
	}

		switch (action)
		{
		case 0:
			break;
		case 1:
			for (int i = 0; i < 15; i++)
			{
				s[i].print();
				cout << endl;
			}
			break;
		case 2:
			for (int i = 0; i < 3; i++)
			{
				t[i].Print();
				cout << endl;
			}
			break;
		case 3:
			for (int i = 0; i < 3; i++)
			{
				g[i].print();
			}
			break;
		case 4: {
			goodStudents(s);
		}
			
		case 5: {
			oldBoy(s);
		}break;
		case 6: {
			bestTeacher(t, g);
		}break;
		case 7: {
			bedStudents(s);
		}break;
		case 8: {
			relatives(s);
		}break;
		case 9: {
			system("cls");
		}break;


		default:
			break;
		}

}
