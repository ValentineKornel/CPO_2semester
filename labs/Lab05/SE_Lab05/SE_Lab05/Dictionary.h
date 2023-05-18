﻿#pragma once
#include "stdafx.h"
#define DICTNAMEMAXSIZE		20
#define DICTMAXSIZE			100
#define ENTRYNAMEMAXSIZE	30
#define THROW01 "Create: превышен размер словаря"
#define THROW02 "Create: превышен размер максимальной ескости словаря"
#define THROW03 "AddEntry: переполнение словаря"
#define THROW04 "AddEntry: дублирование идентификатора"
#define THROW05 "GetEntry: не найдне элемент"
#define THROW06 "DelEntry: не найден элемент"
#define THROW07 "UpdEntry: не найден элемент"
#define THROW08 "UpdEntry: дублирование идентификатора"

namespace Dictionary
{
	struct Entry  //элемент словаря
	{
		int id;
		char name[ENTRYNAMEMAXSIZE];
	};
	struct Instance  //экземпляр словаря
	{
		char name[ENTRYNAMEMAXSIZE];
		int maxsize = DICTMAXSIZE;
		int size;
		int cnt = 0;
		Entry* dictionary;
	};
	Instance Create
	(
		const char* name,
		int size
	);
	void addEntry
	(
		Instance& ints,
		Entry ed
	);
	void DelEntry(
		Instance& inst,
		int id
	);
	void UpdEntry
	(
		Instance& ints,
		int id,
		Entry new_ed
	);
	Entry GetEntry(
		Instance& inst,
		int id
	);
	void Print(Instance& d);
	void Delete(Instance& d);
};