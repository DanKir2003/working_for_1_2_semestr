#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double e = 1.0, eps;   //вычисление епсилон
	while (1.0 + e != 1.0)
	{
		eps = e;
		e /= 2.0;
	}
	double a, b, c, D;
	int rep;
	do
	{
		cout << "Input a,b,c:" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a != 0)                        //уравнение квадратное
		{
			D = (b * b) - (4.0 * a * c);
			if (fabs(D) / (b * b) <= eps)
			{
				cout << "One root" << endl << "x1=" << ((-b) / (2.0 * a)) << endl;
			}
			else if (D > 0)
			{
				cout << "Two roots" << endl << "x1=" << (-b + sqrt(D)) / (2.0 * a) << "   x2=" << (-b - sqrt(D)) / (2.0 * a) << endl;
			}
			else
				cout << "No roots" << endl;
		}
		else if ((a == 0) and (b != 0))     //уравнение линейное
		{
			cout << "One root" << endl << "x1=" << ((-c) / b) << endl;
		}
		else if ((a == 0) and (b == 0))    //уравнение не зависит от х
		{
			if (c == 0)
				cout << "Infinite roots" << endl;
			else
				cout << "No roots" << endl;
		}

		cout << endl << "Repeat the program? (1/0)" << endl;
		cin >> rep;
		cout << endl;
		if (rep != 1)
			break;
	} while (true);
}