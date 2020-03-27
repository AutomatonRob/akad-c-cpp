/*
 * Program receives the input of two integers and outputs the char codes and characters in between begin and end value.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int begin, end, temp;

    printf("##################################################");
    printf("\nThe program outputs the char codes and characters.");
    printf("\nOnly positive integers from 0 to 126 are allowed.");
    printf("\n##################################################");
    printf("\n\n");

    printf("Please set char code to begin with: ");
    fflush(stdin);
    if (scanf("%i", &begin) != 1) {
        printf("Invalid input!\n");
        exit(1);
    }

    printf("Please set char code to end at: ");
    fflush(stdin);
    if (scanf("%i", &end) != 1) {
        printf("Invalid input!\n");
        exit(1);
    }

    if (begin < 0 || end < 0 ) {
        printf("The entered range includes negative values that are not allowed!");
        exit(1);
    }

    if (begin > 126 || end > 126) {
        printf("An entered value exceeds the maximum of 126!");
        exit(1);
    }

    if (begin > end) {
        temp = end;
        end = begin;
        begin = temp;
    }

    for (int i = begin; i <= end; i++) {
        printf("\n%i\t%c", i, i);
    }

    return 0;
}
