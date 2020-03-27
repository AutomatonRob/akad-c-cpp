/*
 * Program reads two integers and returns the accumulated sum of this ranges values.
 */

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void sum();

int main() {
    sum();
    return 0;
}

void sum() {
    int start, end, temp, sum;
    sum = 0;

    printf("####################################################");
    printf("\nSum up all integers within a certain range.");
    printf("\nPositive and negative integers allowed, including 0.");
    printf("\nEnter start and end of the desired range.");
    printf("\n####################################################");
    printf("\n\n");

    printf("Starting from integer: ");
    fflush(stdin);
    if(scanf("%d", &start) != 1) {
        printf("Invalid input!");
        exit(1);
    }

    printf("Ending at integer: ");
    fflush(stdin);
    if(scanf("%d", &end) != 1) {
        printf("Invalid input!");
        exit(1);
    }

    if (start > end) {
        temp = end;
        end = start;
        start = temp;
    }

    for (int i = start; i <= end; i++) {
        sum += i;
    }
    printf("Sum: %d", sum);
}
