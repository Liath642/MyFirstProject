#include <iostream>
using namespace std;

double CalcPay(int a, double b);

int main()
{
	int hours;
	double payrate;
	cout << "Enter the hours as integer -> $";
	cin >> hours;
	cout << " enter the PayRate as Decimal -> $";
	cin >> payrate;
	cout << " your payments is -> $" << CalcPay(hours,payrate) << endl;
}

double CalcPay(int a, double b) {
	return (a * b);
}
