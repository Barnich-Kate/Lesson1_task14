#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	double A1, B1, C1, A2, B2, C2, D, x, y;
	cout << "Type the value of A1";
	cin >> A1;
	cout << "Type the value of B1";
	cin >> B1;
	cout << "Type the value of C1";
	cin >> C1;
	cout << "Type the value of A2";
	cin >> A2;
	cout << "Type the value of B2";
	cin >> B2;
	cout << "Type the value of C2";
	cin >> C2;
	D = A1*B2 - A2*B1;
	x = (C1*B2 - C2*B1) / D;
	y = (A1*C2 - A2*C1) / D;
	cout << "x =" << x << endl;
	cout << "y =" << y << endl;
	return 0;
}
