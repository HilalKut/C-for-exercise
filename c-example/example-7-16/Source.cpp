#include <stdio.h>
int main() {
	char name[10];   //�sim dizisinde saklanan karakter say�s� 9'dur; 10'uncu karakter dizenin sonundaki \0 (bo� karakter) i�in ayr�lm��t�r.
	printf("who are you?");
	fgets(name, 10, stdin);  //klavyeden giri�i okumak i�in fgets() i�levini kullan�rken daima stdin yaz�n.
	printf("gland to meet you,%s.\n", name);
	return(0);
}