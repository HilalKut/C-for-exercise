#include <stdio.h>
int main() {
	int c;
	printf("i'm waiting a caharacter: ");
	c = getchar();
	printf("i waited for the '%c' character.\n",c);
	return(0);
}

/*
* getchar() taraf�ndan okunan karakter bilgisayarda ASCII kod de�eri olarak saklan�r.
*/