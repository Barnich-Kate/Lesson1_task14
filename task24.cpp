#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int A, B, C;
	cout << "Type the value of A";
	cin >> A;
	cout << "Type the value of B";
	cin >> B;
	cout << "Type the value of C";
	cin >> C;
	A = C;
	C = B;
	B = A;
	cout << "The value of the A is equal to" << A << endl;
	cout << "The value of the B is equal to" << B << endl;
	cout << "The value of the C is equal to" << C << endl;
	return 0;


}
    
