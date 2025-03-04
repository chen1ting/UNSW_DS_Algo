#include <stdio.h>

int factorial_helper(int n, int acc) {
    if (n == 0) return acc;
    return factorial_helper(n - 1, n * acc);
}

int factorial(int n) {
    return factorial_helper(n, 1);
}

int main() {
    printf("Factorial: %d\n", factorial(5)); // 输出 120
    return 0;
}