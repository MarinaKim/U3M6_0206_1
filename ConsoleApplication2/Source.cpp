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
		cout << "������� ����� �������: ";
		cin >> n;

		switch (n) {
//1.	�������� ������� int f(int m2, int m1, int m0), � ������� ������ �������� ���� ���� ���������� �� ���������. 
	//��� ������� ��������� � ���������� ����������� �����, ������ (�����), ������ (�������) � ������ (�������)
	//����� �������� ����� �������������� m2, m1, m0. ��������� ���������� ������� ���, ����� ����� ���������� ��������� x=f() �������� x ��������� 567.
		case 1: {
			int m2, m1, m0,x;
			cout << "�������: " << endl;
			cout << "m2: "; cin >> m2;
			cout << endl;
			cout << "m1: "; cin >> m1;
			cout << endl;
			cout << "m0: "; cin >> m0;
			cout << endl;

			x = f(m2, m1, m0);
			cout << x <<endl;


		}break;

			//2.	�������� ��������� ������� � ����� ������ int f(�) � � ������� �������� ����������. ����������������� ������ ������������� �������
		case 2: {


		}break;

			//3.	��������� int u=f(3, 4); double v=f(20.5, 10.5); myofs<<�u=�<<u<<� v=�<<v<<endl; ���� � ���������� u=7 v=10 
			//(�.�. �������������� ����� � ������������ ����� ����������). �������� ������� f(�,�).
		case 3: {
			int a, b, u;
			double a1, b1, v;
			cout << "�������: " << endl;
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
//4.	�������� ������� f(double& a, double& b, double c, double q), ������� ���������� ������ �������������� ������������,
			//���������� �������� ����� �, � ������ ���� q (��������).  
			//
		case 4: {
			double c, q, a=0., b=0.;
			cout << "������� �������� ���������� �������������� ������������: ";
			cin >> c;
			cout << " ������� �������� ������� ����: ";
			cin >> q;

			double k = sin(q);
			cout << "sinq= " << k <<endl; // ������-�� ����� �� ��������� �������(((

			katet(a, b, c, q);

			cout << "����� a: " << a << endl;
			cout << "����� b: " << b << endl;


		}break;

			//5.	�������� ������� f(double* a, double* b, double c, double q), ������� ���������� ������ �������������� 
			//������������, ���������� �������� ����� �, � ������ ���� q (��������).
		case 5: {
			double c, q,a=0,b=0;
			cout << "������� �������� ���������� �������������� ������������: ";
			cin >> c;
			cout << " ������� �������� ������� ����: ";
			cin >>q;


		}break;
		}
	} while (n > 0);
}
