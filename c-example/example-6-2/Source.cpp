#include <stdio.h>
int main() {
	char c;
	int i;
	float f;
	double d;

	c = 'a';	//* Tek karakterleri 'a' gibi tek t�rnak i�ine alarak belirtmeyi unutmay�n.
	i = 1;
	f = 19.0;
	d = 20000.009;

	

	printf("%c\n",c);
	printf("%d\n",i);
	printf("%f\n",f);
	printf("%f\n",d);


	char c2;
	c2 = '\x0B';
	printf("%d\n", c2);
	
	/*
	Yazamayaca��n�z karakterler ASCII kodlar�yla belirtilir. 
	\x ka��� dizisini kullanarak karakterin onalt�l�k kod de�erini tek t�rnak i�ine al�n. 
	Yani onalt�l�k tabanda 0B olan 11 karakter koduna referans vermek i�in '\x0B' kullan�rs�n�z.
	*/

	return(0);
}