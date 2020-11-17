#include <iostream>
#include <string>

using namespace std;

class Student
{

	static const size_t CURR_YEAR = 2020;
	bool isLeap(size_t year)
	{
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	}

public:
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

	void setNumber(const size_t number_) {
		
		const size_t MAX_NUMBER = 10;
		if (number_ < MAX_NUMBER) {
			numb = number_;
		}
	}

	const string& getNumber()
	{
		return numb;
	}

	void setMonth(const size_t month_)
	{
		if (month_ > -1 && month_ <= 12)
		{
			month = month_;
		}
	}

	const size_t& getMonth()
	{
		return month;
	}

	void setYear(const size_t year_)
	{
		if (year_ < CURR_YEAR - 18)
		{

		}
	}
	
	const size_t& getYear()
	{
		return year;
	}

	void setDay(size_t day_) {
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

	void print()
	{
		cout << day << "/" << month << "/" << year << endl;
	}

	void inputStudent()
	{
			cout << "Enter day:\t";
			cin >> day;
			cout << "Enter month:\t";
			cin >> month;
			cout << "Enter year:\t";
			cin >> year;
			cout << "Enter number:\t";
			cin >> numb;
			cout << "Enter name universe:\t";
			cin >> nameUniversity;
			cout << "Enter country:\t";
			cin >> country;
	}
private:
	size_t day, month, year = 2000;
	string numb, country, nameUniversity;
};

int main()
{
	Student stud;
	
	stud.inputStudent();
	cout << "_________________________" << endl;
	cout << "Day:\t" << stud.getDay() << endl;
	cout << "Month:\t" << stud.getMonth() << endl;
	cout << "Year:\t" << stud.getYear() << endl;
	cout << "Number:\t" << stud.getNumber() << endl;
	cout << "Name Univer:\t" << stud.getUniversity() << endl;
	cout << "Country Univer:\t" << stud.getCountry() << endl;
	stud.print();

	return 0;
}
