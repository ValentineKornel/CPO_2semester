#include "stdafx.h"


int checkIfCorrect(int day, int month, int year, int leap_flag, int data, int Months[12]);
int getBirthdayNumber(int day, int month, int year, int leap_flag);
int getNumber(int day, int month, int year, int leap_flag);
string nameMonth(int month);
int countTheEventDate(int evetn_day, int Months[12], int year);

int main() {
	setlocale(LC_CTYPE, "Russian");
	int day, month, year, data, leap_flag;

	int Months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cout << "Enter the date in format ДДММГГГГ" << endl;
	cin >> data;
	year = data % 10000;
	month = (data % 1000000 - year) / 10000;
	day = data / 1000000;
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
		leap_flag = 1;
		Months[1] = 29;
	}
	else {
		leap_flag = 0;
	}
	checkIfCorrect(day, month, year, leap_flag, data, Months);
	if (leap_flag == 1) cout << "This is Leap Year" << endl;
	else cout << "This is NOT Leap Year" << endl;
	cout << "Sequence number of the day entered in data: " << getNumber(day, month, year, leap_flag) << endl;
	cout << "Amount of days until my birthday: " << getBirthdayNumber(day, month, year, leap_flag) << endl;
	int event_day;
	cout << "\nEnter the sequence number of day: ";
	cin >> event_day;
	countTheEventDate(event_day, Months, year);
	system("PAUSE");
	return 0;
}




