#include <iostream>
using namespace std;

int main()
{
	double hours;
	double payrate;
	cout << "Enter the hours as integer -> $";
	cin >> hours;
	cout << " enter the PayRate as Decimal -> $";
	cin >> payrate;
	cout << " your payments is -> $" << CalcPay(hours,payrate) << endl;
}

double CalcPay(double a, double b) {
	return (a * b);
}
