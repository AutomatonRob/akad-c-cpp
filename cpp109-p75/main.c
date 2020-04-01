/*
 * CPP109, p75
 * Exercise: function pointer
 */

#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int mult(int x, int y) {
    return x * y;
}

int main(void) {
    int (*op)(int, int); //Funktionszeiger op deklariert
    op = add; //auch möglich: op = &add;
    printf("%d\n", op(3, 4)); //Ausgabe: 7
    op = mult; //auch möglich: op = &mult;
    printf("%d", op(3, 4)); //Ausgabe: 12
}
