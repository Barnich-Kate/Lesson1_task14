#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int x1, y1, x2, y2, S, P, a, b;
	cout << "Type the value of x1";
	cin >> x1;
	cout << "Type the value of y1";
	cin >> y1;
	cout << "Type the value of x2";
	cin >> x2;
	cout << "Type the value of y2";
	cin >> y2;
	a = abs(x1-x2);
	b = abs(y1-y2);
	P = (a+b)*2;
	S = a*b;
	cout << "The value of perimetr is equal to" << P << endl;
	cout << "The value of the square is equal to" << S << endl;
	return 0;


}
