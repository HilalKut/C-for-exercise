#include <stdio.h>
int main() {
	printf("%d\n",127);
	printf("%1.2f\n",3.141592);	//? de�eri ondal���n solunda 1 basamak ve sa��nda 2 basamak olacak �ekilde g�r�nt�lenir.
	printf("%d\n",122013);
	printf("%1.1f\n",0.00008);	//ondal���n hem solunda hem de sa��nda bir basamak olacak �ekilde g�r�nt�lenir.
	printf("%1.4f\n",0.00008);		//bir sonraki basama�a yuvarlan�r
	printf("%1.3f\n",3.141592);		//? de�eri 3,141'den 3,142'ye yuvarlan�r.
	return(0);
}