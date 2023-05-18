#include <iostream>
#include "Varparm.h"

using namespace std;
using namespace Varparm;

void main() {
	int idemonstration1 = ivarparm(1, 5);
	int idemonstration2 = ivarparm(2, 4, 5);
	int idemonstration3 = ivarparm(3, 6, 4, 2);
	int idemonstration4 = ivarparm(7, 2, 4, 6, 9, 2, 4, 1);
	cout << "Here is ivarparm function demonstration:" << endl;
	cout << idemonstration1 << endl;
	cout << idemonstration2 << endl;
	cout << idemonstration3 << endl;
	cout << idemonstration4 << endl;

	int sdemonstration1 = svarparm(1, 5);
	int sdemonstration2 = svarparm(2, 4, 5);
	int sdemonstration3 = svarparm(3, 6, 4, 2);
	int sdemonstration4 = svarparm(7, 2, 4, 6, 9, 2, 4, 1);
	cout << "Here is svarparm function demonstration: " << endl;
	cout << sdemonstration1 << endl;
	cout << sdemonstration2 << endl;
	cout << sdemonstration3 << endl;
	cout << sdemonstration4 << endl;

	double fdemonstration1 = fvarparm(1.45, FLT_MAX);
	double fdemonstration2 = fvarparm(2.86, 14.71, FLT_MAX);
	double fdemonstration3 = fvarparm(3.56, 1.47, 9.14, FLT_MAX);
	double fdemonstration4 = fvarparm(1.65, 4.86, 23.53, 33.11, 3.88, 4.77, 5.55, FLT_MAX);
	cout << "Here is fvarparm function demonstration: " << endl;
	cout << fdemonstration1 << endl;
	cout << fdemonstration2 << endl;
	cout << fdemonstration3 << endl;
	cout << fdemonstration4 << endl;

	double ddemonstration1 = dvarparm(1.45, DBL_MAX);
	double ddemonstration2 = dvarparm(2.86, 14.71, 9.14, DBL_MAX);
	double ddemonstration3 = dvarparm(3.56, 1.47, 9.14, DBL_MAX);
	double ddemonstration4 = dvarparm(1.65, 4.86, 23.53, 33.11, 3.88, 4.77, 5.55, DBL_MAX);
	cout << "Here is dvarparm function demonstration: " << endl;
	cout << ddemonstration1 << endl;
	cout << ddemonstration2 << endl;
	cout << ddemonstration3 << endl;
	cout << ddemonstration4 << endl;
}