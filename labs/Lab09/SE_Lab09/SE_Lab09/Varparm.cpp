#include "Varparm.h"
#include <float.h>

namespace Varparm {
	int ivarparm(int n, ...) {
		if (n == 0)
			return 0;

		int multiply = 1;
		int* pointer = &n;
		for (int i = 1; i < n + 1; i++) {
			multiply *= *(pointer + i);
		}
		return multiply;
	}

	int svarparm(short n, ...) {
		int max = 0;

		int* poiner = (int*)(&n);
		for (int i = 1; i < n + 1; i++) {
			if (*(poiner + i) > max)
				max = *(poiner + i);
		}
		return max;
	}

	double fvarparm(float n, ...) {
		double summ = (double)n;
		double* pointer = (double*)(&n + 1);
		if (n == FLT_MAX)
			return 0;
		for (int i = 0; pointer[i] != (double)FLT_MAX; i++)
			summ += pointer[i];
		return summ;
	}

	double dvarparm(double n, ...) {
		double summ = n;
		double* pointer = &n + 1;
		if (n == DBL_MAX)
			return 0;
		for (int i = 0; pointer[i] != DBL_MAX; i++)
			summ += pointer[i];
		return summ;
	}
}