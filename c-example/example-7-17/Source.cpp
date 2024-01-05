#include <stdio.h>
int main() {
	const int size = 3;  //Çýktýda yalnýzca iki karakterin okundu
	char name[size];
	printf("who are you?");
	fgets(name, size, stdin);
	printf("glad to meet you,%s.\n", name);
	return(0);
}