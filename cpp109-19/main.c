#include <stdio.h>

int main() {
    int zahl1, zahl2;
    int weiter = 1;

    while (weiter == 1) {

        printf("Zahl 1: ");
        fflush(stdin);
        scanf("%i", &zahl1);

        printf("Zahl 2: ");
        fflush(stdin);
        scanf("%i", &zahl2);

        printf("\n");
        printf("%i + %i = %i\n", zahl1, zahl2, zahl1 + zahl2);
        printf("%i - %i = %i\n", zahl1, zahl2, zahl1 - zahl2);
        printf("%i * %i = %i\n", zahl1, zahl2, zahl1 * zahl2);
        printf("%i / %i = %i\n", zahl1, zahl2, zahl1 / zahl2);

        printf("Weiter (j/n)? ");
        fflush(stdin);
        scanf("%i", &weiter);
    }
    return 0;
}
