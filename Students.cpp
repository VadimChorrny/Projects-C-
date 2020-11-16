#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Person
{
public:

	class Date
	{
		static const size_t CURR_YEAR = 2020;
		bool isLeap(size_t year)
		{
			return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

		}
	public:

		void setCountry(const string country_)
		{
			if (!country.empty())
			{
				nameUniversity = country_;

			}
			else {
				cout << "ERROR" << endl;
			}
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
		void setNumber(const string number_) {
			if (number_ >- 1 && number_ <= 10) // NEED DEVELOPMENT
			{
				numb = number_;
				
			}
			else {
				cout << "error" << endl;
			}
		}
		void setMonth( const size_t month_)
		{
			if (month_ >- 1 && month_ <= 12)
			{
				month = month_;
			}
		}
		void setYear(const size_t year_)
		{
			if (year_ < CURR_YEAR - 18)
			{

			}
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
		}

		void print()
		{
			cout << day << "/" << month << "/" << year << endl;
		}



		void input()
		{
			int counter;
			do
			{
				cout << "Enter day: ";
				cin >> day;
				cout << "Enter month: ";
				cin >> month;
				cout << "Enter year: ";
				cin >> year;
				cout << "Enter number: ";
				cin >> numb;
				cout << "Enter name universe";
				cin >> nameUniversity;
				cout << "Enter country: ";
				cin >> nameUniversity;
			} while (true);
		}

	private:
		size_t day, month, year = 2000;
		string numb, country, nameUniversity;
	};

	int max_age = 122;

	void input() {
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter username: ";
		cin >> surname;
		cout << "Enter age: ";
		cin >> age;

	}


	void print()
	{
		cout << "name: " << setw(10) << name << endl;
		cout << "surname: " << setw(10) << surname << endl;
		cout << "age: " << setw(10) << age << endl;
	}
	// accessors, getter & setter
	void setName( const string &newName) // more effective
	{
		if (!newName.empty())
		{
			name = newName;
		}
		
	}
	const string & getName() // save code and effective
	{
		return name;
	}
	// SURNAME
	void setSurname(const string& newSurname)
	{
		if (!newSurname.empty())
		{
			surname = newSurname;
		}
	}

	const string& getSurname()
	{
		return surname;
	}

	// AGE
	void setAge(const int& newAge)
	{
		if (!newAge < 122)
		{
			age = newAge;
		}
		else if (newAge < max_age) {
			cout << "norm" << endl;
		}
		else {
			cout << "error" << endl;
		}
		
	}

	const int& getAge()
	{
		return age;
	}


private: // incapsulation 
	string name = "noname";
	string surname = "nosurname";
	size_t age = 0;
	string numbers;
	string city;
	string country;

};

void main()
{
	Person person; // { "Vova" ,"V.", 14}; // incapsulation
	cout << "size:" << sizeof(person) << endl;
	
	

	//person.name
}
