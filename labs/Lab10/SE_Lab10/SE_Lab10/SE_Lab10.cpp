#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int target1 = 3;
	int num_items1 = count(v.begin(), v.end(), 3);
	cout << "число: " << target1 << " количество: " << num_items1 << '\n';

	int num_items3 = count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
	cout << "количество элементов, кратных 3: " << num_items3 << '\n';

	cout << " Лямбда, захват переменных" << endl;
	for (auto i : v) [i]() {if (i % 3 == 0) cout << i << " "; }();

	cout << endl << " Лямбда с параметрами" << endl;
	for (auto i : v) [](auto i) {if (i % 3 == 0) cout << i << " "; }(i);

	cout << endl << " Лямбда без параметров" << endl;
	for (auto i : v) [i] {if (i % 3 == 0) cout << i << " "; }();

	auto concat = [](string str1, string str2) {return str1 + str2; };
	auto bigger_str = [](string str1, string str2) {return str1.length() > str2.length() ? str1 : str2; };

	string str1 = "Hello ";
	string str2 = "world";
	string str3 = concat(str1, str2);
	string str4 = bigger_str(str1, str2);
	cout << '\n' << str3 << endl;
	cout << str4 << endl;
}