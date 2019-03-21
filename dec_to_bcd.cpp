#include "iostream"
#include "cmath"
using namespace std;

int main () {
	
	unsigned int dec_number = 0;
	unsigned int summ = 0;
	unsigned int counter = 0;
	unsigned int temp = 0;
	
	cin>>dec_number;
	
	while (dec_number > 0) {
		temp = dec_number / 10;
		summ += dec_number - temp * 10;
		dec_number /= 10;
		++counter;
	}
	cout<<summ<<endl<<counter;
	return 0;
}
