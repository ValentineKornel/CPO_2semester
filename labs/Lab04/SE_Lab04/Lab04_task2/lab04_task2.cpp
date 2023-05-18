#include <iostream>
using namespace std;

typedef string country_code;
typedef unsigned short provider;
typedef unsigned int number;
typedef string owner;
typedef string tarif;
typedef bool is_limitless_internet;
typedef int all_nets_minutes;


struct Number {
	country_code code;
	provider prov;
	number numb;
};

struct User {
	struct Number num;
	owner own;
	tarif tar;
	is_limitless_internet intern;
	all_nets_minutes min;
};

bool operator ==(User user1, User user2){
	bool result;
	if (user1.tar == user2.tar)
		result = true;
	else 
		result = false;
	return result;
}

bool operator > (User user1, User user2) {
	bool result;
	if (user1.min > user2.min)
		result = true;
	else
		result = false;
	return result;
}


void main() {
	setlocale(LC_ALL, "Russian");
	User user1 = {{"+375", 25, 7502053}, "Valentine", "smth", true, 2000};
	User user2 = { {"+375", 44, 9041325}, "Tatsiana", "smth", true, 1000};

	if (user1 == user2)
		cout << "Both of the users have the same tarif plan" << endl;
	else
		cout << "Users have different tafir plans" << endl;

	if (user1 > user2)
		cout << "First user have a bit more minutes the second one" << endl;
	else
		cout << "First user doesn't have more minutes then the second one" << endl;
}