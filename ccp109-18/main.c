/*
 * The for-loop is not executed because variable limit is unsigned int and a conversion from the negative int variable
 * i to unsigned int results in a really big number (4294967294)! Therefor the loop never runs.
 */

#include <stdio.h>

int main() {
    unsigned int limit = 10;
    // unsigned int j = -2;
    // printf("%u", j);
    for (int i = -2; i < limit; i++) {
        printf("%d", i);
    }
    return 0;
}
