/*
 * Program reads two positive integers and returns the values of the different basic arithmetic operations
 */

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void calc();

int main() {
    calc();
    return 0;
}

void calc() {
    int int1 = 0;
    int int2 = 0;
    char proceed;

    do {
        proceed = ' ';

        printf("Integer #1: ");
        fflush(stdin);
        scanf("%i", &int1);

        printf("Integer #2 (!= 0): ");
        fflush(stdin);
        scanf("%i", &int2);

        if (int2 == 0) {
            printf("Division by 0 not allowed!");
            exit(1);
        }

        printf("\n");
        printf("%i + %i = %i\n", int1, int2, int1 + int2);
        printf("%i - %i = %i\n", int1, int2, int1 - int2);
        printf("%i * %i = %i\n", int1, int2, int1 * int2);
        printf("%i / %i = %i\n", int1, int2, int1 / int2);
        printf("\n");

        while (proceed != 'y' && proceed != 'n') {
            printf("Proceed (y/n)? ");
            fflush(stdin);
            scanf("%s", &proceed);
        }
    } while (proceed == 'y');
    printf("\n\n\n");
}


