// ConsoleApplication57.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include"pch.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
double MAS1(double a, int n);
void MAS2();
void MAS3();
void MAS4(double i, double f, int count);
int main() {
	double a, b, dx, eps;
	cin >> a >> b >> dx >> eps;
	MAS2();
	MAS3();
	MAS2();
	for (double i = a; i <= b; i += dx) {
		double f = 0;
		int count = 1;
		double t = i;
		while (t >= eps) {
			double check = t;
			f += t * pow(-1, count + 1);
			t = MAS1(i, count);
			count++;
			if (count > 5 && check - t < 0) {
				f = MAS1(i, 1);
				break;
				count = 1;
			}
		}
		MAS4(i, f, count);
		MAS2();

	}


	system("pause");
}
double MAS1(double a, int n) {
	return pow(a, n) / n;
}
void MAS3() {
	cout << "|" << setw(6) << right << setfill(' ') << "I" << setw(7) << setfill(' ');
	cout << "|" << setw(15) << right << setfill(' ') << "F(x)*" << setw(5) << setfill(' ');
	cout << "|" << setw(5) << right << setfill(' ') << "N" << setw(5) << setfill(' ') << "|" << endl;
}
void MAS2() {
	cout << setw(13) << left << setfill('-') << "+";
	cout << setw(20) << left << setfill('-') << "+";
	cout << setw(10) << left << setfill('-') << "+" << '+' << endl;
}
void MAS4(double i, double f, int count) {
	
	cout << "|" << setw(7) << right << setfill(' ') << i << setw(6);
	cout << "|" << setw(14) << right << setprecision(3) << setfill(' ') << f << setw(6);
	cout << "|" << setw(5) << right << setfill(' ') << count << setw(5) << "|" << endl;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
