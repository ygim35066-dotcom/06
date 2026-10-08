#include <stdio.h>

int get_integer(const char* message);
int factorial(int n);
int combination(int n, int r);

int main(void) {

    int n, r, result;

    n = get_integer("Enter n: ");
    r = get_integer("Enter r: ");

    if (n < r || n < 0 || r < 0) {
        printf("Invalid input! (n must be >= r)\n");
        return 1;
    }

    result = combination(n, r);
    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}


int combination(int n, int r) {
    return factorial(n) / (factorial(n - r) * factorial(r));
}


int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}


int get_integer(const char* message) {
    int input;
    printf("%s", message);
    scanf("%d", &input);
    return input;
}