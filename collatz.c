#include <stdio.h>
#include <stdlib.h>
#include "collatz.h"


/*
int collatz(int N) {
    int count = 0;
    while (N != 1) {
        if (N % 2 == 0) {
            N /= 2;
        } else {
            N = 3 * N + 1;
        }
        count++;
    }
    return count;
}

int collatz_r(int N) {
    if (N == 1) {
        return 0;
    }
    if (N % 2 == 0) {
        return 1 + collatz_r(N/2);
    } else {
        return 1 + collatz_r(3 * N + 1);
    }
    return 0;
}
*/

int main(int argc, char *argv[]) {
    int N;
    int MIN;
    int MAX;

    char *terminal_number;

    if (argc < 2) {
        printf("Error: Aruguments %s\n", argv[0]);
        terminal_number = "3";
    } else {
        terminal_number = argv[1];
    }

    N = atoi(terminal_number);

    int count = collatz_r(N);
    printf("collatz recursive<%d: %d>\n", N, count);

    count = collatz(N);
    printf("collatz iterative<%d: %d>\n", N, count);
   return 0;
}
