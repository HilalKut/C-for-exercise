#include <stdio.h>
int main() {
	unsigned int ono;
	ono = -10;
	printf("the value of ono is %u.\n", ono);	//value 10 with the - (negative) unary operator prefixed.
	printf("the value of ono is %d\n", ono);
	return(0);
}

/*
It can be output as an unsigned value, 4294967286,
or it can be displayed as a signed value, -10.
*/