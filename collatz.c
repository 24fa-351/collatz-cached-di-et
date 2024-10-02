#include <stdio.h>
#include <stdlib.h>
#include "collatz.h"



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
