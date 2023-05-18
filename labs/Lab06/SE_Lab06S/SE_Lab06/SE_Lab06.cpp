#include <iostream>
#include <windows.h>
#include "D:\Учеба\Constructure_of_Software\Labs\Spring_semester\Lab06\SE_Lab06S\SE_Lab06L\Dictionary.h"
using namespace std;
using namespace Dictionary;


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	try
	{
		Dictionary::Instance d1 = Dictionary::Create("Преподaватели", 5); //создание словаря
		Dictionary::Entry e1 = { 1, "Бедодед" }, //элементы словаря
			e2 = { 2, "Чайковский" },
			e3 = { 3, "Гринюк" },
			e4 = { 4, "Барковский" },
			e5 = { 5, "Мущук" };

		Dictionary::addEntry(d1, e1); //добавление элемента в словарь
		Dictionary::addEntry(d1, e2);
		Dictionary::addEntry(d1, e3);
		Dictionary::addEntry(d1, e4);
		Dictionary::addEntry(d1, e5);

		Dictionary::DelEntry(d1, 2);

		Entry new_entry1 = { 6, "Коваль" };
		Dictionary::UpdEntry(d1, 3, new_entry1);

		Dictionary::Print(d1);
		Dictionary::Instance d2 = Dictionary::Create("Студенты", 5);
		Dictionary::Entry s1 = { 1, "Корнелюк" }, s2 = { 2, "Коваль" }, s3 = { 3, "Кивлинас" };
		Dictionary::addEntry(d2, s1);
		Dictionary::addEntry(d2, s2);
		Dictionary::addEntry(d2, s3);
		Dictionary::Entry new_entry2 = { 4, "Савчук" };
		Dictionary::UpdEntry(d2, 3, new_entry2);
		Dictionary::Print(d2);

		cout << endl;
		Dictionary::Entry ex2 = Dictionary::GetEntry(d1, 4); //найти элемент в словаре по id 4
		Dictionary::Delete(d1);
		Dictionary::Delete(d2);
	}
	catch (const char* e) {
		cout << e << endl;
	}
	system("pause");
}