#include <iostream>
using namespace std;

bool Is_Number_Even (unsigned short number);

int main () {
	short Number_Of_Dots = 0;
	cout << "Put the base size ";
	cin >> Number_Of_Dots;
	if (Is_Number_Even (Number_Of_Dots)) {
		++Number_Of_Dots;
	}
	for (short i = Number_Of_Dots / 2; i >= 0 ; --i) {
		for (short j = 0; j < i; ++j) {
			cout<<' ';
		}
		for (short k = 1; k <= Number_Of_Dots - i * 2; ++k) {
			cout<<'*';
		}
	cout<<endl;
}
return 0;
}

bool Is_Number_Even (unsigned short number) {
	if ( number == number / 2 * 2) return true;
	else false;
}


