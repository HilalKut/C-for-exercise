#include <stdio.h>
int main() {
	int ch;
	printf("press enter: ");
	getchar();
	ch = 'h';
	putchar(ch);	//ch deðiþkenine yeni satýrý atayabilir ve daha sonra bu deðiþkeni görüntülemek için putchar() komutunu kullanabiliriz.
	ch = 'i';
	putchar(ch);
	putchar('!');
	putchar('\n');	// \n bir kaçýþ dizisidir ve bir karakter olduðu için tek týrnak içine alýnmalýdýr.
	return(0);
}