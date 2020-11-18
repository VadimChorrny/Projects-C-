#include <iostream>
#include <string>
#include<conio.h>


using namespace std;

class Student
{
	bool isDigit(const size_t& SIZE_, const string& string_) {
		for (size_t i = 0; i < SIZE_; i++)
		{
			if (!isdigit(string_[i]))
			{
				return false;
			}
		}
		return true;
	}

	static const size_t CURR_YEAR = 2020;
	static const size_t OLD_YEAR = 2002;
	bool isLeap(size_t& year) {
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	}

public:
	/// <summary>
	/// groups
	/// </summary>
	/// <param name="group_"></param>
	void setGroup(const string group_) {
		if (group.empty()) {
			group = group_;
		}
		else {
			cout << "error" << endl;
		}
	}
	const string& getGroup()
	{
		return group;
	}


	/// <summary>
	/// names
	/// </summary>
	void setName(const string name_)
	{
		if (name_.empty()) {
			name = name_;
		}
		else {
			error;
		}
	}
	const string& getName() {
		return name;
	}


	/// <summary>
	/// surname
	/// </summary>
	/// <param name="surname_"></param>
	void setSurname(const string surname_)
	{
		if (surname_.empty()) {
			surname = surname_;
		}
		else {
			error;
		}
	}
	const string& getSurname() {
		return surname;
	}


	/// <summary>
	/// fnames
	/// </summary>
	void setFatherName(const string fatherName_) {
		if (fatherName_.empty()) {
			fatherName = fatherName_;
		}
		else {
			error;
		}
	}
	const string& getFatherName()
	{
		return fatherName;
	}


	/// <summary>
	/// country
	/// </summary>
	void setCountry(const string country_)
	{
		if (!country_.empty())
		{
			country = country_;

		}
		else {
			cout << "ERROR" << endl;
		}
	}
	const string& getCountry()
	{
		return country;
	}


	/// <summary>
	/// univer
	/// </summary>
	/// <param name="university_"></param>
	void setUniversity(const string university_)
	{
		if (!university_.empty())
		{
			nameUniversity = university_;

		}
		else {
			cout << "ERROR" << endl;
		}
	}
	const string& getUniversity()
	{
		return nameUniversity;
	}


	/// <summary>
	/// numbers
	/// </summary>
	/// <param name="number_"></param>
	void setNumber(const size_t &number_) {
		const size_t MAX_NUMBER = 89999999999;
		if (number_ > MAX_NUMBER) {
			numb = number_;
		}
		else {
			cout << "error" << endl;
		}
		
	}
	const size_t& getNumber()
	{
		return numb;
	}


	/// <summary>
	/// month
	/// </summary>
	/// <param name="month_"></param>
	void setMonth(const size_t month_)
	{
		size_t tryMonth;
		if (month_ >= 1 && month_ <= 12)
		{
			month = month_;
		}
		else {
			cout << "ERROR!!! TRY AGAIN" << endl;
		}
	}
	const size_t& getMonth()
	{
		return month;
	}

	/// <summary>
	/// years
	/// </summary>
	/// <param name="year_"></param>
	void setYear(const size_t year_)
	{
		if (year_ < CURR_YEAR && year_ < OLD_YEAR)
		{
			year = year_;
		}
		else {
			cout << "error" << endl;
		}
	}
	const size_t& getYear()
	{
		return year;
	}

	/// <summary>
	/// days
	/// </summary>
	/// <param name="day_"></param>
	void setDay(size_t& day_) {
		size_t dayInMonth[]{ 31,28,31,30,31,30,31,30,31,30,31,30,31 };

		if (day >= 1 && day <= dayInMonth[month - 1])
		{
			day = day_;
		}
		else if (month == 2 && day_ == 29 && isLeap(year)) {
			day = day_;
		}
		else {
			cout << "error" << endl;
		}
	}
	const size_t& getDay()
	{
		return day;
	}



	/// <summary>
	/// enter student
	/// </summary>
	void inputStudent()
	{
		cout << "Enter name:\t";
		cin >> name;
		setName(name);

		cout << "Enter surname:\t";
		cin >> surname;
		setSurname(surname);

		cout << "Enter father name:\t";
		cin >> fatherName;
		setFatherName(fatherName);

		cout << "Enter day:\t";
		cin >> day;

		cout << "Enter month:\t";
		cin >> month;
		setMonth(month);

		cout << "Enter year:\t";
		cin >> year;
		setYear(year);

		cout << "Enter number:\t";
		cin >> numb;
		setNumber(numb);

		cout << "Enter name universe:\t";
		cin >> nameUniversity;
		setUniversity(nameUniversity);

		cout << "Enter country:\t";
		cin >> country;
		setCountry(country);

		cout << "Enter name group:\t";
		cin >> group;
		setGroup(group);
	}


	/// <summary>
	/// output student
	/// </summary>
	void print()
	{
		cout << name << " " << surname << " " << fatherName << endl;
		cout << day << "/" << month << "/" << year << endl;
	}
private:
	string country, nameUniversity, name, surname, fatherName, group;
	size_t day, month, year = 2000;
	size_t numb;
	string error = "error";
};

int main()
{
	Student stud;

	stud.inputStudent();
	system("cls");
	cout << "_________________________" << endl;
	cout << "Name:\t\t" << stud.getName() << endl;
	cout << "Surname:\t" << stud.getSurname() << endl;
	cout << "Father Name:\t" << stud.getFatherName() << endl;
	//cout << "Day:\t" << stud.getDay() << endl;
	cout << "Month:\t" << stud.getMonth() << endl;
	cout << "Year:\t" << stud.getYear() << endl;
	cout << "Number:\t" << "+" << stud.getNumber() << endl;
	cout << "Name Univer:\t" << stud.getUniversity() << endl;
	cout << "Country Univer:\t" << stud.getCountry() << endl;
	cout << "_________________________" << endl;
	cout << endl;
	stud.print();

	return 0;
}
