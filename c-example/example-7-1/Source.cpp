#include <stdio.h>
int main() {
	int c;
	printf("i'm waiting a caharacter: ");
	c = getchar();
	printf("i waited for the '%c' character.\n",c);
	return(0);
}

/*
* getchar() tarafından okunan karakter bilgisayarda ASCII kod değeri olarak saklanır.
*/