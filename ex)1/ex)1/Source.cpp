#include<stdio.h>

void main() {

    for (int i = 0; i < 5; i++) {
        for (int k = 0; k <= i; k++) {
            printf("*");
        }

        printf("/n");

    }
    fgetc(stdin);
}