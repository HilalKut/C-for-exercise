#define _CRT_SECURE_NO_WARNINGS	// vs'de scanf() fonk. kullanabilmek için tanýmlama
#include <stdio.h>


int main() {
	char firstname[15];	//bu dizede 15 karaktere kadar depolama alaný vardýr
	printf("type your firs name: ");
	scanf("%s", firstname);	//scanf() iþlevi metni ilk boþluk karakterine kadar okur
	printf("please to meet you, %s.\n", firstname);
	return(0);
}