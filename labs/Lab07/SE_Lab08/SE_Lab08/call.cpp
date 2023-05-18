#include <iostream>
#include "Call.h"
using namespace std;

namespace call {
	int _cdecl fcdecl(int a, int b, int c) {
		return a + b + c;
	}
	int _stdcall stdcall(int& a, int b, int c) {
		return a * b * c;
	}
	int _fastcall cfst(int a, int b, int c, int d) {
		return a + b + c + d;
	}
}

void main() {
	int a = 1;
	int first_function = call::fcdecl(1, 2, 3);
	int second_function = call::stdcall(a, 2, 3);
	int third_function = call::cfst(1, 2, 3, 4);
	cout << first_function << '\t' << second_function << '\t'
		<< third_function;
}