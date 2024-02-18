#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double Anna, Boris;
	int n = 0;
	cout << "Введите баланс Бориса" << endl;
	cin >> Boris;
	cout << "Введите баланс Анны" << endl;
	cin >> Anna;
	cout << "Год  Анна  Борис"<<endl;
	while (Boris <= Anna)
	{
		cout << n <<"    "<< Anna <<"  "<< Boris << endl;
		Anna += 0.1 * Anna;
		Boris += 0.05 * Boris;
		n += 1;
	}
	cout << n << "  " << Anna << "  " << Boris << endl;
}


