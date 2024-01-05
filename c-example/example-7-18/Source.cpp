#include <stdio.h>
int main() {
	char firstname[15];
	char lastname[15];

	printf("type your firs name: ");
	fgets(firstname, 15, stdin);
	printf("type your last name: ");
	fgets(lastname, 15, stdin);
	printf("pleased to meet you, %s %s.\n", firstname, lastname);
	return(0);

}