#include <stdio.h>
int main() {
	printf("%d\n",127);
	printf("%1.2f\n",3.141592);	//? deðeri ondalýðýn solunda 1 basamak ve saðýnda 2 basamak olacak þekilde görüntülenir.
	printf("%d\n",122013);
	printf("%1.1f\n",0.00008);	//ondalýðýn hem solunda hem de saðýnda bir basamak olacak þekilde görüntülenir.
	printf("%1.4f\n",0.00008);		//bir sonraki basamaða yuvarlanýr
	printf("%1.3f\n",3.141592);		//? deðeri 3,141'den 3,142'ye yuvarlanýr.
	return(0);
}