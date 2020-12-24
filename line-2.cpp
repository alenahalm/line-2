#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	int deg, min, sec;
	long double rad;
	cout << "Enter radians" << endl;
	cin >> rad;
	sec = rad * 206264.81;
	deg = sec / 3600;
	sec -= (deg * 3600);
	min = sec / 60;
	sec -= (min * 60);
	cout << deg << " degrees, " << min << " minutes, " << sec << " seconds" << endl;
	system("pause");
}