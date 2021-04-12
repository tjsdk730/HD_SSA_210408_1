#include<stdio.h>
void main() {
	for (int x = 1; x <= 5; x++) {
		for (int y = 0; y < x; y++) {
			printf("*");
		}
		printf("\n");
	}
	fgetc(stdin);
}