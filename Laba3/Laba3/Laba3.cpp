#include <iostream>
using namespace std;
int main()
{
	double d, e;
	const double a = 5000, b = 10000, c = 20000, per_a = 0, per_b = 0.1, per_c = 0.15, per_d = 0.2;
	cout << "enter dohod";
	cin >> d;
	while (d >= 0)
	{
		if (d <= a)
			e = d * per_a;
		else if (d <= b + a) 
			e = a * per_a + (d - a) * per_b;
		else if (d <= a + b + c)
			e = a * per_a + b * per_b + (d - a - b) * per_c;
		else
			e = a * per_a + b * per_b + c * per_c + (d - a - b - c) * per_d;
		cout << e << endl;
		cin >> d;
	}

}
