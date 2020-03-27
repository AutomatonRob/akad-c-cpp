#include <stdio.h>

int main() {
    int begin, end, temp;

    printf("Bitte erste Grenze eingeben (ganze Zahl): ");
    fflush(stdin);
    scanf("%i", &begin);

    printf("Bitte zweite Grenze eingeben (ganze Zahl): ");
    fflush(stdin);
    scanf("%i", &end);

    if (begin > end) {
        temp = end;
        end = begin;
        begin = temp;
    }

    for (int i = begin; i <= end; i++) {
        printf("\n%i\t%c", i, i);
    }
    
    return 0;
}
