#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int getSum(int x, int y) {
	return x + y;
}

void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_CTYPE, "rus");
	bool variable1 = false;
	bool variable2 = true;
	char my_name_second_letter = 'o';
	char my_name_russian_secon_letter = 'ð';
	wchar_t my_name_first_letter = L'K';
	wchar_t my_name_russian_first_letter = L'Ê';
	short variable3 = 23;   //1700
	short variable4 = -23;  //ffe9    0017 -> 1000 0000 0001 0111 ->  1111 1111 1110 1000 -> ff e9
	short the_lowest_short = 0x8000;
	short the_highest_short = 0x7fff;
	unsigned short the_lowest_unsigned_short = 0x0;
	unsigned short the_highest_unsigned_short = 0xffff;
	int variable5 = 24;     //0x1800 0000
	int variable6 = -24;    //ffff ffe8
	int the_lowest_int = -0x7fffffff;
	int the_highest_int = 0x7fffffff;
	unsigned int the_lowest_unsigned_int = 0x0;
	unsigned int the_highest_unsigned_int = 0xffffffff;
	long variable7 = 25L;  //0x1900 0000
	long variable8 = -25L;  //ffff ffe8
	long the_lowest_long = 0x80000000L;
	long the_highest_long = 0x7fffffffL;
	unsigned long the_lowest_unsigned_long = 0x0L;
	unsigned long the_highest_unsigned_long = 0xffffffffL;
	float variable9 = 25.0f;  //41c8 00000         0001 1001,0000 0000  -> 1,1001  -> 0 10000011 10010000  -> 0100 0001 1100  1000 0000000 -> 41c8
	float variable10 = -25.0f; //c1c8 0000         1001 1001,0000 0000   ->   1100 0001 1100 1000
	float f1 = (23.625f / 0) * 5;
	float f2 = -(23.625f / 0 * 5);
	float f3 = sqrt(-2.0f);
	double f4 = 2890.3923;
	char* pointer_on_char = &my_name_second_letter;
	wchar_t* pointer_on_whar_t = &my_name_first_letter;
	int* pointer_on_int = &variable5;
	float* pointer_on_float = &variable9;
	double* pointer_on_double = &f4;

	pointer_on_char += 3;
	pointer_on_whar_t += 3;
	pointer_on_int += 3;
	pointer_on_float += 3;
	pointer_on_double += 3;

	int(*pointer_on_function)(int x, int y) = getSum;
	int a = 3;
	pointer_on_function(2, 3);


}
