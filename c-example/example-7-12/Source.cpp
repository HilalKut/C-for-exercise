#define _CRT_SECURE_NO_WARNINGS	// vs'de scanf() fonk. kullanabilmek i�in tan�mlama
#include <stdio.h>


int main() {
	char firstname[15];	//bu dizede 15 karaktere kadar depolama alan� vard�r
	printf("type your firs name: ");
	scanf("%s", firstname);	//scanf() i�levi metni ilk bo�luk karakterine kadar okur
	printf("please to meet you, %s.\n", firstname);
	return(0);
}