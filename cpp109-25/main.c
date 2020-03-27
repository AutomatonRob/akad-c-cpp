/*
 * Program shows EULER's number with a precision level set by user input.
 */

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

#define MAX_SIZE 23

int main() {
    double precision, euler, approximation, n;
    approximation = 0.0;
    euler = 1.0;
    n = 1.0;

    int isEqual, faculty;
    faculty = 0;
    isEqual = 0;

    char precisionString[MAX_SIZE];

    printf("Please indicate the required precision (e.g.: 0.0001): ");
    fflush(stdin);
    scanf("%s", precisionString);
    precision = strtod(precisionString, NULL);

    do {
        n *= ++faculty;
        euler += 1 / n;
        if (euler <= approximation + precision) {
            isEqual = 1;
        }
        else {
            approximation = euler;
        }
    } while (isEqual == 0);

    printf("\nEULER's number: %.*lf", DECIMAL_DIG, euler);
    printf("\nPrecision: %.*lf", DECIMAL_DIG, precision);
    printf("\nFaculty: %i!", faculty);

    return 0;
}
