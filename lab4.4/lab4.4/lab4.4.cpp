// lab4.4.cpp
// Сташкевич Владислав
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 19

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double x, xFirst, xLast, dx, y, R;

	cout << "Enter R: "; cin >> R;
	cout << "Enter first x: "; cin >> xFirst;
	cout << "Enter last x: "; cin >> xLast;
	cout << "Enter dx: "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x"  << " |"
			    << setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	for (x = xFirst; x <= xLast; x += dx) {
		if (x < -1) y = 1 - x;
		else if (x <= 1) y = 0;
		else if (x < 1 + 2 * R) y = sqrt(pow(R, 2) - pow((x - 1 - R), 2));
		else y = (x - 2 * R - 1) / (2 * R - 6);
		cout << "|" << setw(7)  << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
	}

	return 0;
}