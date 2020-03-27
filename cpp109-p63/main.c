/*
 * Übungsaufgabe CPP109, p63f
 * Thema: Listen (Arrays)
 */

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void tanteEmma();
int main(void) {
    tanteEmma();
    return EXIT_SUCCESS;
}

void tanteEmma() {
        double monatsumsatz[12] = { 0 };
        double quartalsumsatz[4] = { 0 };
        double jahresumsatz = 0;
        double maxumsatz = 0;
        double maxquartalumsatz = 0;
        int maxquartal = 1;
        int quartal = 1;
        int monat = 1;

        printf("Bitte geben Sie die Umsatzwerte ein:\n");
        for (int n = 0; n < 12; n++) {
            monat = n + 1;
            printf("Umsatz in Monat %d: ", monat);
            fflush(stdin);
            scanf("%lf", &monatsumsatz[n]);
            jahresumsatz += monatsumsatz[n];
            quartalsumsatz[quartal-1] += monatsumsatz[n];

            if (monat == 1) {
                maxumsatz = monatsumsatz[n];
            }
            else if (maxumsatz < monatsumsatz[n]) {
                maxumsatz = monatsumsatz[n];
            }

            if (quartal == 1) {
                maxquartalumsatz = quartalsumsatz[quartal-1];
            }
            else if (maxquartalumsatz < quartalsumsatz[quartal-1]) {
                maxquartalumsatz = quartalsumsatz[quartal-1];
                maxquartal = quartal;
            }

            if (monat % 3 == 0) {
                quartal++;
            }
        }

        printf("\nErgebnisse:");
        printf("\n##################################################");
        printf("\nJahresumsatz: %.2lf €", jahresumsatz);
        printf("\nDurschnittlicher Monatsumsatz: %.2lf €", jahresumsatz / 12);
        printf("\nHöchster Quartalsumsatz: %.2lf € (Q%d)", maxquartalumsatz, maxquartal);
        printf("\n##################################################");
}