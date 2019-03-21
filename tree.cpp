#include "iostream"
using namespace std;

int main () {
	short Number_Of_Dots = 0;
	cout << "Put the base size ";
	cin >> Number_Of_Dots;
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


