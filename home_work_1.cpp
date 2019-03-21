#include "iostream"
#include "cmath"
#include "complex.h"

using namespace std;

int main () {
	const unsigned short coeff_2 = 2;
	const unsigned short coeff_4 = 4;
	
	float A = 0;
	float B = 0;
	float C = 0;
	
	float D = 0;
	
	float X_Pos = 0;
	float X_Neg = 0;
	
	cout << "put a:";
	cin >> A;
	cout << "put b:";
	cin >> B;
	cout << "put c:";
	cin >> C;
	
	D = B * B - coeff_4 * A * C;
	
	if (D < 0) {
		cout << -B + csqrtf(D);//cout << "complex result expected. try to use complex.h ;-)";	
	}	
	else {
		X_Pos = (-B + sqrt(D)) / coeff_2 * A;
		X_Neg = (-B - sqrt(D)) / coeff_2 * A;
		cout << "X_Pos=" << X_Pos << endl << "X_Neg=" << X_Neg << endl;
	}
	
return 0;
}


