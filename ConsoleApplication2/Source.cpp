#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include<math.h>

#include "Header.h"
using namespace std;


void main()
{
	int n;
	setlocale(LC_ALL, "Russian");

	do
	{
		cout << "¬ведите номер задани€: ";
		cin >> n;

		switch (n) {
//1.	Ќапишите функцию int f(int m2, int m1, int m0), в которой заданы значени€ всех трех параметров по умолчанию. 
	//Ёто функци€ вычисл€ет и возвращает натуральное число, перва€ (сотни), втора€ (дес€тки) и треть€ (единицы)
	//цифры которого равны соответственно m2, m1, m0. “ребуетс€ определить функцию так, чтобы после выполнени€ оператора x=f() значение x равн€лось 567.
		case 1: {
			int m2, m1, m0,x;
			cout << "¬ведите: " << endl;
			cout << "m2: "; cin >> m2;
			cout << endl;
			cout << "m1: "; cin >> m1;
			cout << endl;
			cout << "m0: "; cin >> m0;
			cout << endl;

			x = f(m2, m1, m0);
			cout << x <<endl;


		}break;

			//2.	Ќапишите несколько функций с одним именем int f(Е) и с разными наборами параметров. ѕродемонстрируйте работу перегруженных функций
		case 2: {


		}break;

			//3.	ќператоры int u=f(3, 4); double v=f(20.5, 10.5); myofs<<Фu=Ф<<u<<Ф v=Ф<<v<<endl; дают в результате u=7 v=10 
			//(т.е. соответственно сумму и произведение своих параметров). Ќапишите функции f(Е,Е).
		case 3: {
			int a, b, u;
			double a1, b1, v;
			cout << "¬ведите: " << endl;
			cout << "a: "; cin >> a;
			cout << endl;
			cout << "b: "; cin >> b;
			cout << endl;
			cout << "a1: "; cin >> a1;
			cout << endl;
			cout << "b1: "; cin >> b1;
			cout << endl;

			u = sum(a, b);
			v = razn(a1, b1);
			cout << "u = " << u << " v = " << v << endl;

		}break;
//4.	Ќапишите функцию f(double& a, double& b, double c, double q), котора€ возвращает катеты пр€моугольного треугольника,
			//гипотенуза которого равна с, а острый угол q (градусов).  
			//
		case 4: {
			double c, q, a=0., b=0.;
			cout << "¬ведите значение гипотенузы пр€моугольного треугольника: ";
			cin >> c;
			cout << " ¬ведите значение острого угла: ";
			cin >> q;

			double k = sin(q);
			cout << "sinq= " << k <<endl; // почему-то синус не правильно считает(((

			katet(a, b, c, q);

			cout << "катет a: " << a << endl;
			cout << "катет b: " << b << endl;


		}break;

			//5.	Ќапишите функцию f(double* a, double* b, double c, double q), котора€ возвращает катеты пр€моугольного 
			//треугольника, гипотенуза которого равна с, а острый угол q (градусов).
		case 5: {
			double c, q,a=0,b=0;
			cout << "¬ведите значение гипотенузы пр€моугольного треугольника: ";
			cin >> c;
			cout << " ¬ведите значение острого угла: ";
			cin >>q;


		}break;
		}
	} while (n > 0);
}
