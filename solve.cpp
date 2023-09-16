#include "solve.h"
#include <cmath>
#include <iostream>

int solve(double a, double b, double c, double &x1, double &x2)
{
	double d = b * b - 4 * a * c;
	int n;
	if (d < 0) {
		n = 0;
	}
	else if (d == 0) {
		n = 1;
		x1 = -b / 2. / a;
	}
	else {
		n = 2;
		x1 = (-b + sqrt(d)) / 2. / a;
		x2 = (-b - sqrt(d)) / 2. / a;
	}
	return n;
}

void print_array(int* a, int n) {
	for (int i = 0; i < n; ++i) {
		std::cout << a[i] << " ";
	};
}

void sort_array(int* a, int n) {
	print_array(a, n);
	std::cout << ":" << n << std::endl;

	if (n < 2) return;
	int *first = a, *last = a + n - 1, *f = a + n - 1;

	while (first < last) {
		while (*(++first) < *f);
		while (last > first && *(--last) > *f);
		if (first < last) {
			int tmp = *first;
			*first = *last;
			*last = tmp;

		}
	}
	if (first < f) {
		int tmp = *first;
		*first = *f;
		*f = tmp;
	}

	print_array(a, n);
	std::cout << ":" << n << std::endl;

	sort_array(a, first - a);
	sort_array(first + 1, f - first);
}