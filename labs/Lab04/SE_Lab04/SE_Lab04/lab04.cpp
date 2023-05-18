#include <iostream>
using namespace std;

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date {
	day dd;
	month mm;
	year yy;
};

bool operator > (Date a, Date b) {
	return (a.yy > b.yy) || ((a.yy == b.yy) && (a.mm > b.mm)) || ((a.yy == b.yy) && (a.mm == b.mm) && (a.dd > b.dd));

	/*
	if (a.yy > b.yy)
		return true;
	else {
		if (b.yy > a.yy)
			return false;
		else {
			if (a.mm > b.mm)
				return true;
			else {
				if (b.mm > a.mm)
					return false;
				else {
					if (a.dd > b.dd)
						return true;
					else
						return false;
				}
			}
		}
	}
	*/
}

bool operator < (Date a, Date b) {
	return (a.yy < b.yy) || ((a.yy == b.yy) && (a.mm < b.mm)) || ((a.yy == b.yy) && (a.mm == b.mm) && (a.dd < b.dd));

	/*
	if (a.yy < b.yy)
		return true;
	else {
		if (b.yy < a.yy)
			return false;
		else {
			if (a.mm < b.mm)
				return true;
			else {
				if (b.mm < a.mm)
					return false;
				else {
					if (a.dd < b.dd)
						return true;
					else
						return false;
				}
			}
		}
	}
	*/
}

bool operator == (Date a, Date b) {
	return (a.dd == b.dd && a.mm == b.mm && a.yy == b.yy);
}

void main() {
	setlocale(LC_ALL, "Russian");
	Date date1 = { 7, 1, 1980 };
	Date date2 = { 7, 2, 1993 };
	Date date3 = { 7, 1, 1980 };

	if (date1 < date2) cout << "истина" << endl;
	else cout << "ложь" << endl;


	if (date1 > date2) cout << "истина" << endl;
	else cout << "ложь" << endl;

	if (date1 == date2) cout << "истина" << endl;
	else cout << "ложь" << endl;

	if (date1 == date3) cout << "истина" << endl;
	else cout << "ложь" << endl;
}