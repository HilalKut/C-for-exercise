#include <stdio.h>
int main() {
	int c;
	printf("i'm waiting for a character: ");
	c = getchar();
	printf("i waited for the '%d' character.\n",c);	// girilen kodun ASII kodunu ��kt� olarak g�r�r�z.
	return(0);
}