#include <stdio.h>
int main() {
	char a, b, c, d;
	a = 'A';
	b = a + 24;	//Char de�i�keni, ASCII karakter kodunu temsil eden bir tam say� de�erini saklar.
	c = b + 8;
	d = '\n';
	printf("%c%c%c%c",a,b,c,d);
	return(0);
}