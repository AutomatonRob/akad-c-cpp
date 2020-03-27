/*
 * Program shows EULER's number with a precision level set by user input.
 */

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

// GLOBALS
#define MAX_SIZE 23

// Function prototypes
void eulerPrecision();

int main(void) {
    eulerPrecision();
    return 0;
}

void eulerPrecision() {
    long double precision, euler, approximation, n;
    int isEqual = 0;
    long faculty = 0;
    char precisionString[MAX_SIZE];

    approximation = 0.0;
    euler = 1.0;
    n = 1.0;

    printf("\n##############################################");
    printf("\nProgram calculates the value of EULER's number");
    printf("\nup to a certain precision entered by the user.");
    printf("\n##############################################");
    printf("\n\n");

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

    printf("\nEULER's number: %.*Lf", DECIMAL_DIG, euler);
    printf("\nPrecision: %.*Lf", DECIMAL_DIG, precision);
    printf("\nFaculty: %ld!", faculty);
}
