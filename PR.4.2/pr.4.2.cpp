#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "-------------------------" << endl;
	cout << "|" << setw(5) << "x" << "    |" 
		<< setw(7) << "y" << "      |" << endl;
	cout << "--------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		A = 1.0/abs(x+2)+1;
		if (x<1)
		B = 7*pow(x,2)+x-8;
	else
		if (x>4)
			B = sqrt(1+ abs (pow(cos(x),3)));
		else
			B = 1/tan(x+4)/sqrt(11)+3;
	y = A - B;
	cout << "|" << setw(7) << setprecision(2) << x
		<< "    |" <<setw(10) << setprecision(3) << y
		<<"     |" << endl;
	x += dx;
	}
	cout << "------------------------" << endl;
	return 0;
}