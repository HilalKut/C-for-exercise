#include <stdio.h>
int main() {
	int c;
	printf("i'm waiting for a character: ");
	c = getc(stdin);		
	printf("i waited for the 'c' character.\n",c);
	return(0);
}


/*
* 
etchar()'�n aksine, getc() i�levi parantezlerin aras�nda bir ba��ms�z de�i�ken gerektirir. 
Bu arg�man, standart giri� i�in stdin ile temsil edilen giri� dosyas� tan�t�c�s�d�r.
stdin standart giri� cihaz� i�in bir sabit olarak tan�mlan�r.

*/