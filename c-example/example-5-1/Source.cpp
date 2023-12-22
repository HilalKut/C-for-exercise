#include <stdio.h>
int main() {
	printf("the value %d is an integer.\n", 986);
	printf("the value %f is a float.\n",98.6);
	return(0);
}


/*

* Her iki printf() iþlevinde de kaynak kodda gösterildiði gibi görüntülenmeyen iki öðe kullanýlýyor: 
dönüþtürme karakterleri ve kaçýþ karakterleri
(conversion characters and escape characters.).

* Dönüþtürme karakterlerinin önüne % (yüzde iþareti) eklenir, kaçýþ karakterlerinin önüne \ (ters eðik çizgi) eklenir.

* Dönüþüm karakterlerine yer tutucular(placeholders) da denilebilir.

* Bir dizede % karakterini görüntülemek için iki % karakterini (%%) belirtmelisiniz. 
Profesyoneller bile zaman zaman bunu yapmayý unuturlar. Yani %50'yi yazdýrmak için þu ifadeyi kullanýrsýnýz:

printf("%50");

Veya:

printf("%d%%",50);

* Benzer þekilde, bir dizede \ görüntülemek için bunlardan ikisini (\\) belirtmeniz gerekir.

*/