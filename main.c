#include <stdio.h>

int sumTwo(int a, int b) {
    return a + b;
}

int square(int n) {
    return n * n;
}

int get_max(int x, int y) {
    return (x > y) ? x : y;
}

int main(void) {
    printf("sumTwo(3, 5) = %d\n", sumTwo(3, 5));
    printf("square(5) = %d\n", square(5));
    printf("get_max(10, 20) = %d\n", get_max(10, 20));

    return 0;
}