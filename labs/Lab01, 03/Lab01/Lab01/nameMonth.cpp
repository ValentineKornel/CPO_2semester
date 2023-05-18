#include "stdafx.h"

string nameMonth(int month) {
	string name_of_months[12] = { "January", "February", "March",
		"April", "May", "June", "July", "August", "September",
		"October", "November", "December" };
	return name_of_months[month - 1];
}