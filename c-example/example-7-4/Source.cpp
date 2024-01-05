#include <stdio.h>
int main() {
	int a, b, c;
	printf("i'm waiting for three characters: ");
	a = getchar();
	b = getchar();
	c = getchar();
	printf("the three characters are '%c', '%c', and '%c'\n", a, b, c);
	return(0);
}