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
etchar()'ýn aksine, getc() iþlevi parantezlerin arasýnda bir baðýmsýz deðiþken gerektirir. 
Bu argüman, standart giriþ için stdin ile temsil edilen giriþ dosyasý tanýtýcýsýdýr.
stdin standart giriþ cihazý için bir sabit olarak tanýmlanýr.

*/