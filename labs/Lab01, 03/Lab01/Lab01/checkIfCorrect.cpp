#include "stdafx.h"

int checkIfCorrect(int day, int month, int year, int leap_flag, int data, int Months[12]) {
	if (month > 12) {
		cout << "Wrong month format";
		exit(0);
	}


	if ((data > 99999999) || (data < 1011900)) {
		cout << "Wrong amount of data";
		exit(0);
	}
	if (((leap_flag == 0) && (day > Months[month - 1])) || (day < 1)) {
		cout << "Incorrect day format";
		exit(0);
	}
	if (leap_flag == 1); {
		Months[1] = 29;
		if ((day >> Months[month - 1]) || (day < 1)) {
			cout << "Incorrext day format";
			exit(0);
		}
	}
	return 0;
}