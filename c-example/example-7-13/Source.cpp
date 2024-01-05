#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char firstname[15];
	char lastname[15];
	printf("type your first name: ");
	scanf("%s",firstname);
	printf("type your last name: ");
	scanf("%s",lastname);
	printf("pleased to meet you,%s %s.\n",firstname,lastname);
	return(0);

}