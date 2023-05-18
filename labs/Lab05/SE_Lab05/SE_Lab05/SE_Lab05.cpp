#include <iostream>
#include <windows.h>
#include "stdafx.h"
using namespace std;
using namespace Dictionary;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
#if (defined(TEST_CREATE_01) + defined(TEST_CREATE_02) + defined(TEST_ADDENTRY_03) + defined(TEST_ADDENTRY_04) + defined(TEST_GETENTRY_05) + defined(TEST_DELENTRY_06) + defined(TEST_UPDENTRY_07) + defined(TEST_UPDENTRY_08) + defined(TEST_DICTIONARY) > 1 )
#error Превышенно количество макросов
#endif
	try
	{
#ifdef TEST_CREATE_01 //превышен размер имени словаря
		Instance d1 = Create("оченьоченьоченьбольшоеимядлясловаря", 5);
#endif
#ifdef TEST_CREATE_02 //превышен размер максимальной емкости словаря
		Instance d1 = Create("Преподaватели", 100000);
#endif

#ifdef TEST_ADDENTRY_03
		Instance test = Create("Test", 0);
		Entry test_entry = { 1, "test_entry1" };
		addEntry(test, test_entry);
#endif

#ifdef TEST_ADDENTRY_04 //дублирование индентификатора
		Instance test = Create("Test", 2);
		Entry test_entry = { 1, "test_entry1" };
		addEntry(test, test_entry);
		addEntry(test, test_entry);
#endif



#ifdef TEST_GETENTRY_05 //GetEntry: не найден элемент
		Instance test = Create("Test", 2);
		Entry test_entry = { 1, "test_entry1" };
		addEntry(test, test_entry);
		GetEntry(test, 2);
#endif

#ifdef TEST_DELENTRY_06 //DelEntry: не найден элемент
		Instance test = Create("Test", 2);
		Entry test_entry = { 1, "test_entry1" };
		addEntry(test, test_entry);
		DelEntry(test, 2);
#endif

#ifdef TEST_UPDENTRY_07
		Instance test = Create("Test", 3);
		Entry test_entry = { 1, "test_entry1" }, entry_to_update = { 2, "entry_to_update" };
		addEntry(test, test_entry);
		UpdEntry(test, 3, entry_to_update);
#endif

#ifdef TEST_UPDENTRY_08
		Instance test = Create("Test", 3);
		Entry test_entry = { 2, "test_entry1" }, entry_to_update = { 2, "entry_to_update" };
		addEntry(test, test_entry);
		UpdEntry(test, 2, entry_to_update);
#endif


#ifdef TEST_DICTIONARY
		Instance d1 = Create("Преподaватели", 5); //создание словаря
		Entry e1 = { 1, "Бедодед" }, //элементы словаря
			e2 = { 2, "Чайковский" },
			e3 = { 3, "Гринюк" },
			e4 = { 4, "Барковский" },
			e5 = { 5, "Мущук" };

		addEntry(d1, e1); //добавление элемента в словарь
		addEntry(d1, e2);
		addEntry(d1, e3);
		addEntry(d1, e4);
		addEntry(d1, e5);

		DelEntry(d1, 2);

		Entry new_entry1 = { 6, "Коваль" };
		UpdEntry(d1, 3, new_entry1);

		Print(d1);
		Instance d2 = Create("Студенты", 5);
		Entry s1 = { 1, "Корнелюк" }, s2 = { 2, "Коваль" }, s3 = { 3, "Кивлинас" };
		addEntry(d2, s1);
		addEntry(d2, s2);
		addEntry(d2, s3);
		Entry new_entry2 = { 4, "Савчук" };
		UpdEntry(d2, 3, new_entry2);
		Print(d2);

		cout << endl;
		Entry ex2 = GetEntry(d1, 4); //найти элемент в словаре по id 4
		Delete(d1);
		Delete(d2);
#endif
	}
	catch (const char* e) {
		cout << e << endl;
	}
	system("pause");
}