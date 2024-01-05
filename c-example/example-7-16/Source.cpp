#include <stdio.h>
int main() {
	char name[10];   //Ýsim dizisinde saklanan karakter sayýsý 9'dur; 10'uncu karakter dizenin sonundaki \0 (boþ karakter) için ayrýlmýþtýr.
	printf("who are you?");
	fgets(name, 10, stdin);  //klavyeden giriþi okumak için fgets() iþlevini kullanýrken daima stdin yazýn.
	printf("gland to meet you,%s.\n", name);
	return(0);
}