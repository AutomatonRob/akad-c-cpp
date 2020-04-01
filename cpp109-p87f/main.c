#include <stdio.h>
#include <string.h>

int main() {
    struct Datum {
        int tag;
        char monat[10];
        int jahr;
    };
    struct Telefonbucheintrag {
        char name[25];
        char vorname[25];
        long nummer;
        struct Datum geburtstag;
    };
    struct Telefonbucheintrag kontakt = (struct Telefonbucheintrag) {
            "Mustermann",
            "Max",
            1234567890,
            (struct Datum) {1, "Januar", 1970}
    };

    printf("Mein Name ist %s %s und mein Geburtstag ist der %d. %s %d.",
           kontakt.vorname,
           kontakt.name,
           kontakt.geburtstag.tag,
           kontakt.geburtstag.monat,
           kontakt.geburtstag.jahr
    );

    return 0;
}
