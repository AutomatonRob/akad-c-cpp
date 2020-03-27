/*
 * Programm reads a user defined number of integers and returns the min and the max.
 */

#include <stdio.h>

// function prototypes


int main() {
    int count, current, min, max, repeat;
    repeat = 1;

    while (repeat == 1) {
        min = 0;
        max = 0;

        printf("Wieviele Zahlen sollen verglichen werden? ");
        fflush(stdin);
        scanf("%i", &count);

        for (int i = 1; i <= count; i++) {
            printf("Zahl %i: ", i);
            fflush(stdin);
            scanf("%i", &current);
            if (i == 1) {
                min = current;
                max = current;
            } else if (current < min) {
                min = current;
            } else if (current > max) {
                max = current;
            }
        }

        printf("\nMin: %d", min);
        printf("\nMax: %d", max);

        printf("\n\nNochmal (1): ");
        fflush(stdin);
        scanf("%d", &repeat);
    }
    return 0;
}
