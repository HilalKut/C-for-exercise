#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int first, second;
	printf("input the first value: ");
	scanf("%d", &first);
	printf("input the second value: ");
	scanf("%d", &second);

	puts("evaluating...");
	if (first < second) {
		printf("%d is less than %d\n", first, second);

	}
	if (first > second) {
		printf("%d is greater than %d\n", first, second);

	}
	if (first == second) {
		printf("%d is equal to %d\n", first, second);
	}
	return(0);
}