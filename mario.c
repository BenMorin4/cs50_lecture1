#include <stdio.h>

int main(void)
{
    int num;

    do {
    printf("Height: \n");
    scanf("%i", &num);
    }
    while (num <= 0 || num > 8);

    for(int i = 1; i <= num; i++ ) {
        for(int x = i; x < num; x++) {
            printf(" ");
        }
        for(int x = 1; x <= i  ; x++ ) {
            printf("#");
        }
        printf("  ");
        for(int x = 1; x <= i  ; x++ ) {
            printf("#");
        }
 //       for(int x = i; x < num; x++) {
 //           printf(" ");
 //       }
    printf("\n");
    }
}