#include <stdio.h>

void test1();

void test2();

int main() {
    test2();

    return 0;
}

void test1(void) {
    int i1 = 42;
    int *ptr = &i1;
    const int *cPtr = &i1;

    // Not allowed: Read-only-pointer
    // *cPtr = 99;

    // Allowed
    *ptr = 99;

    // Assigning to "int *" from "const int *" => const is 'lost'...
    ptr = cPtr;

    // ...and writing is now possible:
    *ptr = 100;
    printf("%d", *ptr);
}

void test2(void) {
    int i1 = 10;
    int i2 = 11;
    int *ptr = &i1; // int-Zeiger
    int **ptrptr; // Zeiger auf int-Zeiger
    ptrptr = &ptr; // zeigt auf ptr

    // i1
    printf("\ni1: %d", i1);
    printf("\n&i1: %p", &i1);
    printf("\n");
    // ptr
    printf("\nptr: %p", ptr);
    printf("\n*ptr: %d", *ptr);
    printf("\n&ptr: %p", &ptr);
    printf("\n");
    // ptrptr
    printf("\nptrptr: %p", ptrptr);
    printf("\n*ptrptr: %p", *ptrptr);
    printf("\n**ptrptr: %d", **ptrptr);

    /*
    **ptrptr = 12; // 2 x dereferenzieren: i1 = 12
    *ptrptr = &i2; // ptr wird auf i2 gesetzt
    *ptr = 13; // in i2 steht jetzt 13
     */
}
