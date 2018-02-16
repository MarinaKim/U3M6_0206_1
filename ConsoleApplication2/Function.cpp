#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include<math.h>

using namespace std;
//1
int f(int m2, int m1, int m0)
{
	return m2 * 100 + m1 * 10 + m0;
}

int sum(int a, int b)
{
	return a + b;
}

double razn(double a, double b)
{
	return a - b;
}

void katet(double &a, double &b, double c, double q)
{
	a = c*sin(q);
	b = sqrt(c*c - a*a);
}