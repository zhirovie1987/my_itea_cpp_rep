#include "stdio.h"
#include "iostream"

using namespace std;

int main () {
	printf("hello, world\n");
	cout << boolalpha;
	cout << true << " " << false << endl;
	printf("This is integer literal %d\n", 10);
  	printf("This is integer literal in hex format 0xA =  %d\n", 0xA);
  	printf("This is integer literal represent in octal format %o\n", 10);
  	printf("This is float literal %f\n", 1.25);
  	printf("This is float literal %f\n", 1.25e1);
  	printf("This is char literal %c\n", 'c');
  	printf("This is string literal %s\n", "string");
return 0;
}
