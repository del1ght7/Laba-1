﻿// лаба 1.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>

int main()
{
	int a, b, c, N;
	printf("Vvedite delimye chisla\n");
	scanf_s("%d%d%d", &a,&b,&c);
	printf("Vvedite delitel\n");
	scanf_s("%d", &N);
	if (a % N == 0) 
		printf("N - delitel chisla a\n");
	else 
		printf("N -  ne delitel chisla a\n");
	if (b % N == 0) 
		printf("N - delitel chisla b\n");
	else
		printf("N -  ne delitel chisla b\n");
	
	if (c % N == 0) 
		printf("N - delitel chisla c\n");
	else
		printf("N -  ne delitel chisla c");
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
