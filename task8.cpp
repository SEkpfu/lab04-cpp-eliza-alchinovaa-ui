//#include <iostream>
//#include <cmath>
//using namespace std;
//
//double korni(double a, double b, double c, double* x1, double* x2);
//
//int main() {
//	
//	setlocale(0, "");
//	double x1, x2;
//	korni(4, -5, 1, &x1, &x2); cout << endl;
//	korni(13, 2, 5, &x1, &x2); cout << endl;
//	korni(1, -4, 4, &x1, &x2); cout << endl;
//	
//	return 0;
//}
//double korni(double a, double b, double c, double* x1, double* x2) {
//	double d = b * b - 4.0 * a * c;
//	if (d > 0) {
//		*x1 = (-b + sqrt(d)) / (2 * a);
//		*x2 = (-b - sqrt(d)) / (2 * a);
//		cout << "1) Корнями уравнения будут: " << endl << "x1 = " << *x1 << endl << "x2 = " << *x2;
//		return 2;
//	}
//	else if (d == 0) {
//		*x1 = -b / (2 * a);
//		cout << "2) Корнем уравнения будет: " << endl << "x = " << *x1;
//		return 1;
//	}
//	else cout << "3) Корней нет!"; return 0;
//}