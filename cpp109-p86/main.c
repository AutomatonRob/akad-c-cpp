#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum Wochentag {
    montag = 1,
    dienstag = 2,
    mittwoch = 3,
    donnerstag = 4,
    freitag = 5,
    samstag = 6,
    sonntag = 7
};

char *Wochentagbezeichner[] = {
        "Montag",
        "Dienstag",
        "Mittwoch",
        "Donnerstag",
        "Freitag",
        "Samstag",
        "Sonntag"
};

bool istWochenende(enum Wochentag tag) {
    return (tag == samstag || tag == sonntag);
}

int main(void) {
    for (enum Wochentag tag = montag; tag <= sonntag; tag = (enum Wochentag) (tag + 1)) {
        printf("\n%i. Tag der Woche: %s. ", tag, Wochentagbezeichner[tag - 1]);
        if (istWochenende(tag))
            printf("Relax, es ist Wochenende!");
        else
            printf("Noch %i Tag(e) bis zum Wochenende", 6 - tag);
    }
    return EXIT_SUCCESS;
}