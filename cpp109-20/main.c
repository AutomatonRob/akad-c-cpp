/*
 * Program reads a user defined number of integers and returns the min and the max.
 */

#include <stdio.h>

// function prototypes
void minMax();

int main() {
    minMax();
    return 0;
}

void minMax() {
    int count, current, min, max;
    char repeat;

    do {
        repeat = ' ';
        min = 0;
        max = 0;

        printf("How many integers do you want to enter? ");
        fflush(stdin);
        scanf("%i", &count);

        for (int i = 1; i <= count; i++) {
            printf("Zahl %i: ", i);
            fflush(stdin);
            scanf("%i", &current);
            if (i == 1) {
                min = current;
                max = current;
            }
            if (current < min) {
                min = current;
            }
            if (current > max) {
                max = current;
            }
        }

        printf("\nMin: %d", min);
        printf("\nMax: %d", max);
        printf("\n\n");

        while (repeat != 'y' && repeat != 'n') {
            printf("Repeat (y/n)? ");
            fflush(stdin);
            scanf("%s", &repeat);
        }
    } while (repeat == 'y');
}
