#include <iostream>
using namespace std;

class Date 
{
public: 
    int month, day, year;
    string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    void Month(int m);
    void Day(int d);
    void Year(int y);
    void onlyNumbers();
    void wordsWithCommas();
    void wordsWithoutCommas();
};

void Date::Month(int m)
{
    month = m;
}
void Date::Day(int d)
{
    day = d;
}
void Date::Year(int y)
{
    year = y;
}

void Date::onlyNumbers()
{
    cout << month << "/" << day << "/" << ((year / 10) % 10) << (year % 10) << endl;
}

void Date::wordsWithCommas()
{
    cout << monthName[month - 1] << " " << day << ", " << year << endl;
}
void Date::wordsWithoutCommas()
{
    cout << day << " " << monthName[month - 1] << " " << year << endl;
}

int main()
{
Date values;
int month, day, year;
cout << "What is the month? ";
cin >> month;
cout << "What is the day? ";
cin >> day;
cout << "What is the year? ";
cin >> year;
if (((month < 1) || (month > 12)) || ((day < 1) || (day > 31)) || (year <= 0))
{
    cout << "Invalid. Try again." << endl;
    exit(0);
}

values.Month(month);
values.Day(day);
values.Year(year);

values.onlyNumbers();
values.wordsWithCommas();
values.wordsWithoutCommas();

return 0;
}