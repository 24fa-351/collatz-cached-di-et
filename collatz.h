
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
