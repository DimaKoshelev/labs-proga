// ConsoleApplication54.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int max, min, sum = 1, n, m,const1, sum1=0;
	int mas[12] = { 1,-6,-8,4,1,3,-3,6,-1,5,-5,-3 };
	for (int i = 0;i < 12;i++) { if (mas[i] < 0)sum1 = sum1 + mas[i]; }
	cout << sum1<<endl;
	max = mas[0];
	min = mas[0];
	for (int i = 0;i < 12;i++) {
		if (max > mas[i]);
		else if (i + 1 < 12) {
			max = mas[i];
			n = i;
		}

	}


	for (int i = 0;i < 12;i++) {
		if (min < mas[i]);
		else if (i + 1 < 12) {
			min = mas[i];
			m = i;
		}
	}

	//right
	if (m < n)
		for (;m <= n;m++)
			sum = sum * mas[m];
	else
		for (;n <= m;n++)
			sum = sum * mas[n];
	cout << sum<<endl;
	for (int i = 0;i < 12;i++)
		for (int j = 11;j >= i;j--) {
			if (mas[j - 1] > mas[j]) {
				const1 = mas[j - 1];
				mas[j - 1] = mas[j];
				mas[j] = const1;
			}
			
}
	for (int i = 0;i < 12;i++)
		cout << mas[i] << endl;
	return 0;
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
