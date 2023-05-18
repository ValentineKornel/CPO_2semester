#pragma once
namespace call {
	int _cdecl fcdecl(int a, int b, int c);
	int _stdcall cstd(int& a, int b, int c);
	int _fastcall cfst(int a, int b, int c, int d);
}