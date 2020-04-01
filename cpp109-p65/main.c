/*
 * Tante Emma v1.1
 * Übungsaufgabe CPP109, p65f
 * Thema: Listen (Arrays)
 */

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void tanteEmma();
double sumArray(double[], int);
double getMax(double[], int);
void inputValues(double *, int);

int main(void) {
    tanteEmma();
    return EXIT_SUCCESS;
}

void tanteEmma() {
    const int NUMBER_OF_MONTHS = 12;
    const int NUMBER_OF_QUARTERS = 4;
    double monthlySales[NUMBER_OF_MONTHS];
    double quarterlySales[NUMBER_OF_QUARTERS];
    double annualSales = 0;
    double maxMonthlySales = 0;
    double maxQuarterSales = 0;

    // Input
    printf("Please enter the sales:\n");
    inputValues(&monthlySales, NUMBER_OF_MONTHS);

    // Calculations
    annualSales = sumArray(monthlySales, NUMBER_OF_MONTHS);
    for (int i = 0; i < NUMBER_OF_QUARTERS; ++i) {
        quarterlySales[i] = sumArray(&monthlySales[i*3], 3);
    }
    maxMonthlySales = getMax(monthlySales, NUMBER_OF_MONTHS);
    maxQuarterSales = getMax(quarterlySales, NUMBER_OF_QUARTERS);

    // Output
    printf("\nSales results:");
    printf("\n##################################################");
    printf("\nAnnual sales: $%.2lf", annualSales);
    printf("\nAverage monthly sales: $%.2lf", annualSales / 12);
    printf("\nHighest monthly sales: $%.2lf", maxMonthlySales);
    printf("\nHighest quarterly sales: $%.2lf", maxQuarterSales);
    printf("\n##################################################");
    printf("\n\n");
}

double sumArray(double data[], int arrayLength) {
    double sum = 0;
    for (int i = 0; i < arrayLength; i++) {
        sum += data[i];
    }
    return sum;
}

double getMax(double data[], int arrayLength) {
    double max = data[0];
    for (int i = 1; i < arrayLength; i++) {
        if (max < data[i]) {
            max = data[i];
        }
    }
    return max;
}

void inputValues(double data[], const int arrayLength) {
    for (int i = 0; i < arrayLength; i++) {
        printf("Sales in month %d: ", i + 1);
        fflush(stdin);
        scanf("%lf", &data[i]);
    }
}