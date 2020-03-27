/*
 * Program reads two integers and returns the accumulated sum of this ranges values.
 */

#include <stdio.h>

int main() {

    int start, end, temp, sum;
    sum = 0;

    printf("Startwert: ");
    fflush(stdin);
    scanf("%i", &start);

    printf("Endwert: ");
    fflush(stdin);
    scanf("%i", &end);

    if (start > end) {
        temp = end;
        end = start;
        start = temp;
    }

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    printf("Summe: %i", sum);

    return 0;
}
