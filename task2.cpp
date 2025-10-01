//#include <iostream>
//#include <cmath>
//using namespace std;
//
//double dlina_otr(double x1, double x2, double y1, double y2);
//double nach1(double x1, double y1);
//double nach2(double x2, double y2);
//double ploshad(double x1, double x2, double y1, double y2, double x3, double y3);
//
//int main() {
//	setlocale(0, "");
//	double x1, y1, x2, y2, x3, y3, x4, y4;
//	cout << "Введите координаты (х1, у1)" << endl << "x1 = "; cin >> x1;
//	cout << "y1 = "; cin >> y1; cout << endl;
//	cout << "Введите координаты (x2, y2)" << endl << "x2 = "; cin >> x2;
//	cout << "y2 = "; cin >> y2; cout << endl;
//	cout << "Введите координаты (x3, y3)" << endl << "x3 = "; cin >> x3;
//	cout << "y3 = "; cin >> y3; cout << endl;
//	cout << "Введите координаты (x4, y4)" << endl << "x4 = "; cin >> x4;
//	cout << "y4 = "; cin >> y4; cout << endl;
//	cout << "a) Длина отрекзка, соединяющего эти две точки = " << dlina_otr(x1, x2, y1, y2) << endl;
//	cout << "b) Расстояние от точки 1 до начала координат = " << nach1(x1, y1) << endl;
//	cout << "b) Расстояние от точки 2 до начала координат = " << nach2(x2, y2) << endl;
//	cout << "c) Площадь треугольника = " << ploshad(x1, x2, y1, y2, x3, y3) << endl;
//	
//	double ploshad_1 = ploshad(x1, x2, y1, y2, x3, y3);
//	double ploshad_2 = ploshad(x1, y1, x3, y3, x4, y4);
//	double plosh4 = ploshad_1 + ploshad_2;
//	cout << "d) Площадь четырёхугольника = " << plosh4;
//	return 0;
//
//}
//
//double dlina_otr(double x1, double x2, double y1, double y2) {
//	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//}
//
//double nach1(double x1, double y1) {
//	return sqrt(x1 * x1 + y1 * y1);
//}
//double nach2(double x2, double y2) {
//	return sqrt(x2 * x2 + y2 * y2);
//}
//double ploshad(double x1, double x2, double y1, double y2, double x3, double y3) {
//	double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//	double b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
//	double c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
//	double p = (a + b + c) / 2;
//
//	return sqrt(p * (p - a) * (p - b) * (p - c));
//}

