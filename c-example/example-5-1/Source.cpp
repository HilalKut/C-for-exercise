#include <stdio.h>
int main() {
	printf("the value %d is an integer.\n", 986);
	printf("the value %f is a float.\n",98.6);
	return(0);
}


/*

* Her iki printf() i�levinde de kaynak kodda g�sterildi�i gibi g�r�nt�lenmeyen iki ��e kullan�l�yor: 
d�n��t�rme karakterleri ve ka��� karakterleri
(conversion characters and escape characters.).

* D�n��t�rme karakterlerinin �n�ne % (y�zde i�areti) eklenir, ka��� karakterlerinin �n�ne \ (ters e�ik �izgi) eklenir.

* D�n���m karakterlerine yer tutucular(placeholders) da denilebilir.

* Bir dizede % karakterini g�r�nt�lemek i�in iki % karakterini (%%) belirtmelisiniz. 
Profesyoneller bile zaman zaman bunu yapmay� unuturlar. Yani %50'yi yazd�rmak i�in �u ifadeyi kullan�rs�n�z:

printf("%50");

Veya:

printf("%d%%",50);

* Benzer �ekilde, bir dizede \ g�r�nt�lemek i�in bunlardan ikisini (\\) belirtmeniz gerekir.

*/