#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int plosh(int storona, int height);
int plosh(int storona1, int storona2, int ugol);
double plosh(double st1, double st2, double st3);

int main() {
	setlocale(0, "");
	cout << "Площадь треугольника через сторону и высоту:" << endl << plosh(5, 4) << endl;
	cout << "Площадь треугольника по 2 сторонам и углу м/у ними:" << endl << plosh(5, 7, 60) << endl; 
	cout << "Площадь треугольника по 3 сторонам:" << endl << plosh(3.0, 4.0, 5.0) << endl;
	return 0;
}
int plosh(int storona, int height) {
	return (storona * height) / 2;
}
int plosh(int storona1, int storona2, int ugol) {
	double ugol_rad = ugol * M_PI / 180.0;
	return (storona1 * storona2 * sin(ugol_rad)) / 2;
}
double plosh(double st1, double st2, double st3) {
	double p = (st1 + st2 + st3) / 2.0;
	return sqrt(p * (p - st1) * (p - st2) * (p - st3));
}