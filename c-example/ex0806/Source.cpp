#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	const int secret = 17;
	int guess;
	printf("can you guess the secret number: ");
	scanf("%d", &guess);
	if (guess == secret) {
		puts("you guessed it!");
		return(0);
	}
	if (guess != secret) {
		puts("wrong!");
		return(1);
	}
}