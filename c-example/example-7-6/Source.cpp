#include <stdio.h>
int main() {
	int ch;
	printf("press enter: ");
	getchar();
	ch = 'h';
	putchar(ch);	//ch de�i�kenine yeni sat�r� atayabilir ve daha sonra bu de�i�keni g�r�nt�lemek i�in putchar() komutunu kullanabiliriz.
	ch = 'i';
	putchar(ch);
	putchar('!');
	putchar('\n');	// \n bir ka��� dizisidir ve bir karakter oldu�u i�in tek t�rnak i�ine al�nmal�d�r.
	return(0);
}