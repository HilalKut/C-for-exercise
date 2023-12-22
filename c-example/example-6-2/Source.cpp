#include <stdio.h>
int main() {
	char c;
	int i;
	float f;
	double d;

	c = 'a';	//* Tek karakterleri 'a' gibi tek týrnak içine alarak belirtmeyi unutmayýn.
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
	Yazamayacaðýnýz karakterler ASCII kodlarýyla belirtilir. 
	\x kaçýþ dizisini kullanarak karakterin onaltýlýk kod deðerini tek týrnak içine alýn. 
	Yani onaltýlýk tabanda 0B olan 11 karakter koduna referans vermek için '\x0B' kullanýrsýnýz.
	*/

	return(0);
}